#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    int peak=arr[n-1];
    for (int i=0;i<n;i++){
        if (arr[i]>arr[i+1] && arr[i]>arr[i-1]){
            peak=arr[i];
            break;
        }
    }
    if (peak==7){
        printf("-1");
    }
    else{
    printf("%d", peak);
    }
    return 0;
}