#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    int ans=-1;
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            if (arr[i]==arr[j]){
                ans=arr[i];
                break;
            }
        }
    }
    printf("%d",ans);
    return 0;
}