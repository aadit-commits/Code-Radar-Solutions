#include <stdio.h>

int countLeadingZeros(int n) {
    int count = 0;
    
    if (n == 0) {
        return 32;
    }
    
      for (int i = 31; i >= 0; i--) {
        if ((n >> i) & 1) {
            break;
        }
        count++;
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