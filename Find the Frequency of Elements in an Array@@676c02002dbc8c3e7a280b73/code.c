// Your code here...
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<n;i++){
        int freq=0;
        for (int j=1;j<n;j++){
            if (arr[i]==arr[j]){
                freq++;
            }
            printf("%d %d",arr[i],freq);
        }
    }
    return 0;
}