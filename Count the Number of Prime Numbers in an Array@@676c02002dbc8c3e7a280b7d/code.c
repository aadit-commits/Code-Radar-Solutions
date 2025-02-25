#include <stdio.h>

int main(){
    int n;
    int arr[n];
    int sump=0;
    int ip=1;
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
                    ip=0;
                }
            }
        }
        if (ip==1){
            sump+=1;
        }
    }
    printf("%d",sump);
    return 0;
}