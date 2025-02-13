#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i=1;i<=n;i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    for (int j=1;j<=n;j++){
        if (arr[j]>max){
            max=arr[j];
        }
    }
    int smax=arr[0];
    for (int k=1;k<=n;k++){
        if (arr[k]>smax && arr[k]!=max){
            smax=arr[k];
        }
    }
    int mp=max*smax;
    printf("%d",mp);
    return 0;
}