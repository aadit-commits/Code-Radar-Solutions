#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    int rep=arr[0];
    for (int j=0;j<n;j++){
        for (int k=0;k<n;k++){
            if (arr[j]==arr[k]){
                rep=arr[j];
                break;
            }
        }
    }
    printf("%d",rep);
    return 0;
}