#include <stdio.h>

int main() {
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for (i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    int smax=arr[0];
    for (i=0;i<n;i++){
        if (max<arr[i]){
            max=arr[i];
        }
    }
    for (i=0;i<n;i++){
        if (smax<arr[i] && arr[i]!=max){
            smax=arr[i];
        }
    }
    printf("%d",smax);
    return 0;
}