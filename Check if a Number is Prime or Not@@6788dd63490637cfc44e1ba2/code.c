#include <stdio.h>

int main() {
    int a,i;
    scanf("%d", &a);
    if (a==2){
        printf("Prime");
    }
    else if (a==1 || a==0){
        printf("Not Prime");
    }
    else {
    for (i=1;i<a;i++){
        if (a%i==0){
            printf("Not Prime");
            break;
        }
        else {
            printf("Prime");
        }
    }
    }
    return 0;
}