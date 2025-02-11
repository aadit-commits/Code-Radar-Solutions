#include <stdio.h>

int main() {
    int n,x;
    scanf("%d %d", &n,&x);
    int arr[n];
    for (int i=1;i<=n;i++){
        scanf("%d",&arr[i]);
    }
    int count=0;
    for (int i=1;i<=n;i++){
        if (arr[i]>x){
            count++;
        }
    }
    printf("%d", count);
    return 0;
}