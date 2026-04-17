#include <stdio.h>

int main(void) {
    int i = 5;
    int j = 6;
    int f = 2;

    i = j + (f += j*f);

    printf("i = %d, f = %d", i, f);
    
    return 0;
}