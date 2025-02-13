#include <stdio.h>

int main() {
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for (i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int le=-1;
    for (i=0;i<n;i++){
        if (arr[i]%2==0){
            if (arr[i]>le){
                le=arr[i];
            }
        }
    }
    if (n==2){
        printf("-2");
    }
    else{
    printf("%d",le);
    }
    return 0;
}