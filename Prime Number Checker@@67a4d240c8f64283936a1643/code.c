#include <stdio.h>

int isPrime(int num){
    int ip=1;
    if (num==0 || num==1){
        ip=0;
    }
    else {
    for (int i=2;i*i<=num;i++){
        if (num%i==0){
            ip=0;
        }
    }
    }
    return ip;
}

/*int main(){
    int t;
    scanf("%d", &t);
    while (t--){
        int num;
        scanf("%d",&num);
        printf("%d\n", isPrime(num));
    }
    return 0;
}*/