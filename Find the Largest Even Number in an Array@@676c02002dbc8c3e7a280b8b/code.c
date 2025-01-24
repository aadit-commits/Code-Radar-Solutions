#include <stdio.h>

int main() {
    int n,i;
    int arr[n];
    for (i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int le=arr[0];
    for (i=0;i<n;i++){
        if (arr[i]%2==0){
            if (arr[i]>le){
                le=arr[i];
            }
        }
    }
    printf("%d",le);
    return 0;
}