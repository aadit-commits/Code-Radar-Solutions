#include <stdio.h>

int countLeadingZeros(int n) {
    int count = 0;
    
    if (n == 0) {
        return 32;
    }
    
       while ((n & 1) == 0) {  
        count++;
        n >>= 1; 
    }
    
    
    return count;
}

int main() {
    unsigned int num;
    scanf("%u", &num);
    int leading_zeros = countLeadingZeros(num);
    printf("%d", countLeadingZeros(num));
    return 0;
}