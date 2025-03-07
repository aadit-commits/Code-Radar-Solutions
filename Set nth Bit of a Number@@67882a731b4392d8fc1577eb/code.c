#include <stdio.h>

unsigned int setNthBit(unsigned int n, int bit_position) {
    unsigned int mask = 1 << bit_position;
    return n | mask;
}

int main() {
    unsigned int num;
    int bit_position;
    scanf("%u %d",&num, &bit_position);
    unsigned int result = setNthBit(num, bit_position);
    printf("%u\n",result);

    return 0;
}
