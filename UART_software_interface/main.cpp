#include <iostream>
#include "uart.hpp"
#include <windows.h>
#include <math.h>

#define WIDTH 320
#define HEIGHT 240

using namespace std;

int main (int argc, char* argv[]) {
    UART uart;

    int baud = 1000000;

    uart.open("COM5", baud);

    int size = WIDTH * HEIGHT + 1;

    uint8_t buffer[HEIGHT][WIDTH];

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
            // if (y == 0) {
            //     buffer[y][x] = 0x3F;
            // }
        }
    }

    uint8_t pkt[HEIGHT * WIDTH + 1];
    pkt[0] = 0x80;

    for (int x = 0; x < WIDTH; x++) {
        for (int y = 0; y < HEIGHT; y++) {
            pkt[x + WIDTH * y + 1] = buffer[y][x];
        }
    }

    uart.write(pkt, size);

    return 0;
}