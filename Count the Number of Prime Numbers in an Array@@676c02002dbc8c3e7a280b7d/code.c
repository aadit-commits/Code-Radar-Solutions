#include <stdio.h>

int main(){
    int n;
    int arr[n];
    int sump=0;
    for (int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    for (int i=0;i<n;i++){
        if (arr[i]==0 || arr[i]==1){
            sump+=0;
        }
        else {
            for (int i=2;i*i<=n;i++){
                if (arr[i]%i==0){
                    sump+=0;
                }
            }
        }
    }
    printf("%d",sump);
    return 0;
}