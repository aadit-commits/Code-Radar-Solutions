// Your code here...
#include <stdio.h>

int reverse(int arr[],int i, int j){
    while (i<j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    reverse(arr,0,n-1);
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
    for (int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
}