#include <stdio.h>
#include <ctype.h>

int main() {
    char x;
    scanf("%c", &x);
    if (isalpha(x)){
        if (isupper(x)){
            printf("Uppercase");
        }
        else {
            printf("Lowercase");
        }
    }
    else {
        prtinf("Not an alphabet");
    }
    
    
    return 0;
}