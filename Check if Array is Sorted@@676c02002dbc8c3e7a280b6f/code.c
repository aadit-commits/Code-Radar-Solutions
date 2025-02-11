#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=1;i<=n;i++){
        scanf("%d", &arr[i]);
    }
    int count=0;
    for (int j=1;j<=n;j++){
        if (arr[j]<=arr[j+1]){
            continue;
        }
        else {
            count++;
        }
    }
    if (count>0){
        printf("Not Sorted");
    }
    else {
        printf("Sorted");
    }
    return 0;
}