#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for (i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int result=sl(arr,n);
    printf("%d",result)
    return 0;
}

int sl(int arr[],int n){

    if (n<2){
        return -1;
    }
    int max=-1;
    int smax=-1;
    for (int i=0;i<n;i++){
        if (max<arr[i]){
            max=arr[i];
        }
    }
    for (int i=0;i<n;i++){
        if (smax<arr[i] && arr[i]!=max){
            smax=arr[i];
        }
    }

    if (smax==-1){
        return -1;
    }
    return smax;
}
