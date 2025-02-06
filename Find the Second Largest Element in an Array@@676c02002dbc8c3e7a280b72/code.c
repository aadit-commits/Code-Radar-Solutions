#include <stdio.h>

int main() {
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for (i=1;i<=n;i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    int smax=arr[0];
    for (i=1;i<=n;i++){
        if (max<arr[i]){
            max=arr[i];
        }
    }
    for (i=1;i<=n;i++){
        if (smax<arr[i] && smax!=max){
            smax=arr[i];
        }
    }
    printf("%d",smax);
    return 0;
}