#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    if (n==1){
        printf("%d", arr[0]);
    }
    else {
    for (int i=1;i<n;i++){
        if (arr[i]>arr[i-1] || arr[i]==arr[n-1]){
            printf("%d ", arr[i]);
            }
    } 
    }
    return 0;
}