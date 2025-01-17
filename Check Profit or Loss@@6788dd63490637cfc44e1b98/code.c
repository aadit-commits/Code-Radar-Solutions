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
    return 0;
}