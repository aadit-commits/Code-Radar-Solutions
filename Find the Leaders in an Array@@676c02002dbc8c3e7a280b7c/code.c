#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    if (n==1){
        printf("%d", arr[n]);
    }
    
    return 0;
}