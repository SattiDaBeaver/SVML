#include <iostream>
#include "uart.hpp"
#include <windows.h>
#include <math.h>

#define WIDTH 320
#define HEIGHT 240

using namespace std;

void update_frame(uint8_t buffer [][WIDTH], UART* uart);
void cool_design(uint8_t buffer [][WIDTH]);
void fill_screen(uint8_t buffer [][WIDTH], uint8_t color);
void swap(UART* uart);

class Ball {
    public:
    int x = 0;
    int y = 0;
    int v_x = 0;
    int v_y = 0;

    Ball(int x, int y, int v_x, int v_y) {
        this->x = x;
        this->y = y;
        this->v_x = v_x;
        this->v_y = v_y;
    }

    void update_ball() {
        x += v_x;
        y += v_y;

        if (x >= WIDTH) {
            x = WIDTH - 1;
            v_x = -v_x;
        }
        else if (x < 0) {
            x = 0;
            v_x = -v_x;
        }
        if (y >= HEIGHT) {
            y = HEIGHT - 1;
            v_y = -v_y;
        }
        else if (y < 0) {
            y = 0;
            v_y = -v_y;
        }
    }

};

int main (int argc, char* argv[]) {
    if (argc > 2) {
        return -1;
    }

    UART uart;
    int baud = 2000000;    
    uart.open(argv[1], baud);

    uint8_t buffer[HEIGHT][WIDTH];

    fill_screen(buffer, 0x00);
    cool_design(buffer);
    update_frame(buffer, &uart);
    swap(&uart);

    Ball barr[5] = {Ball(12, 24, 12, 24),
                    Ball(111, 24, -15, 20),
                    Ball(120, 200, 25, -24),
                    Ball(230, 24, -30, -24),
                    Ball(124, 24, 30, 10)};

    int rad = 5;
    int drad = 3;
    // return 0;
    while(1) {
        rad += drad;
        if (rad > 50) {
            rad = 50;
            drad *= -1;
        }
        else if (rad < 5) {
            rad = 5;
            drad *= -1;
        }
        for (int x = 0; x < WIDTH; x++) {
            for (int y = 0; y < HEIGHT; y++) {
                int dx = x - WIDTH / 2;
                int dy = y - HEIGHT / 2;

                
                if (sqrt(dx*dx + dy*dy) < rad) {
                    buffer[y][x] = (x + y) % 0x3F;
                }
                else {
                    buffer[y][x] = ((WIDTH - x) + y) % 0x3F;
                }
            }
        }
        update_frame(buffer, &uart);
        swap(&uart);

        Sleep(10);

        //-------------------------------

        // fill_screen(buffer, 0x3F);
        // for (int i = 0; i < 5; i++) {
        //     barr[i].update_ball();
        //     int x = barr[i].x;
        //     int y = barr[i].y;
        //     buffer[y][x] = 0x00;
        // }
        
        // update_frame(buffer, &uart);
        // swap(&uart);
        // Sleep(10);

        //------------------------------------------
        // // TEST GOD BLESS
        // char c;
        // std::cin >> c;

        // if (c == 's') {
        //     swap(&uart);
        // }
        // else if (c == 'b') {
        //     fill_screen(buffer, 0x00);
        //     update_frame(buffer, &uart);
        // }
        // else if (c == 'w') {
        //     fill_screen(buffer, 0x3F);
        //     update_frame(buffer, &uart);
        // }
        // else if (c == 'd') {
        //     cool_design(buffer);
        //     update_frame(buffer, &uart);
        // }
    }
    
    Sleep(100);

    return 0;
}

void update_frame(uint8_t buffer [][WIDTH], UART* uart) {
    uint8_t pkt[HEIGHT * WIDTH + 1];
    pkt[0] = 0x80;
    for (int x = 0; x < WIDTH; x++) {
        for (int y = 0; y < HEIGHT; y++) {
            pkt[x + WIDTH * y + 1] = buffer[y][x];
        }
    }
    uart->write(pkt, HEIGHT * WIDTH + 1);
}

void cool_design(uint8_t buffer [][WIDTH]) {
    for (int x = 0; x < WIDTH; x++) {
        for (int y = 0; y < HEIGHT; y++) {
            int dx = x - WIDTH / 2;
            int dy = y - HEIGHT / 2;
            int rad = 50;
            if (sqrt(dx*dx + dy*dy) < rad) {
                buffer[y][x] = (x + y) % 0x3F;
            }
            else {
                buffer[y][x] = ((WIDTH - x) + y) % 0x3F;
            }
        }
    }
}

void fill_screen(uint8_t buffer [][WIDTH], uint8_t color) {
    memset(buffer, color, HEIGHT * WIDTH);
}

void swap(UART* uart) {
    uint8_t packet = 0x81;
    uart->write(&packet, 1);
}
