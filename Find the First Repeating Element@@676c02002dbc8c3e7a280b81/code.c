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
        for (int j=i+1;j<n;j++){
            if (arr[i]==arr[j]){
                ans=arr[i];
                goto end;
            }
        }
    }
    end:
    printf("%d",ans);
    return 0;
}