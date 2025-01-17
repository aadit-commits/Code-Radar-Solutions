#include <stdio.h>
#include <ctype.h>

int main() {
    char a;
    scanf("%c", &a);
    if (isalpha(a)){
        if (a=="a" || a=="A" || a=="e" || a=="E" || a=="i" || a=="I" || a=="o" || a=="O" || a=="u" || a=="U"){
            printf("Vowel");
        }
        else {
            printf("Consonant");
        }
    }
    else if (ispunct(a)){
        printf("Special Character");
    }
    else if (isdigit(a)){
        printf("Digit");
    }
    return 0;
}