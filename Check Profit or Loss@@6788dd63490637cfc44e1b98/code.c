#include <stdio.h>
int main() {
    int a,b;
    scanf("%d %d", &a,&b);
    int res=b-a;
    if (res>0){
        printf("Profit");
    }
    else if (res<0){
        printf("Loss");
    }
    else if (res==0){
        printf("No Profit No Loss");
    }
    return 0;
}