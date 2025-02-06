#include <stdio.h>

int countLeadingZeros(unsigned int n) {
    int count = 0;
    
    if (n == 0) {
        return 32;
    }
    
    while ((n & (1 << 31)) == 0) {
        count++;
        n <<= 1;  
    }
    
    return count;
}

int main() {
    int num;
    scanf("%d",num);
    printf("%d", countLeadingZeros(num));
    return 0;
}