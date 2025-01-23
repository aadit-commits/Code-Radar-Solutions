#include <stdio.h>

int main() {
    int n,i,ip=1;
    scanf("%d", &n);
    if (n<=1){
        ip=0;
    }
    else {
        for (i=2;i*i<=n;i++){
            if (n%i==0){
                ip=0;
                break;
            }
        }
    }
    if (ip){
        printf("Prime");
    }
    else {
        printf("Not Prime");
    }
    return 0;
}