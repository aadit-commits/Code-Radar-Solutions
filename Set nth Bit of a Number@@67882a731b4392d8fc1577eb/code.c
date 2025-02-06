#include <stdio.h>

unsigned int setNthBit(unsigned int n, int bit_position) {
    unsigned int mask = 1 << bit_position;
    return n | mask;
}

int main() {
    unsigned int num;
    int bit_position;
    scanf("%d", &bit_position);
    unsigned int result = setNthBit(num, bit_position);
    printf("%u\n", bit_position, result);

    return 0;
}
