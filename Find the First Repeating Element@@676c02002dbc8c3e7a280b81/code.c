#include <stdio.h>

int repeating(int n,int arr[]){
    for (int i=0;i<n;i++){
        for (int j=i+1;j<n;j++){
            if (arr[i]==arr[j]){
                return arr[i];
                break;
            }
            else {
                return -1;
            }
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    printf("%d", repeating(n,arr));
    return 0;
}