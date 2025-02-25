#include <stdio.h>

int findIndex(int arr[],int target,int n){
    int index=-1;
    for (int i=0;i<n;i++){
        if (arr[i]==target){
            index=i;
            break;
        }
    }
    return index;
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int target;
    scanf("%d",&target);
    printf("%d",findIndex(arr,target,n));
    return 0;
}