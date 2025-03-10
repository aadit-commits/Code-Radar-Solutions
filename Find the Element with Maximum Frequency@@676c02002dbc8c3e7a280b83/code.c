// Your code here...
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int freq=0,ans=0;
    for (int i=0;i<n;i++){
        if (freq==0){
            ans=arr[i];
        }
        if (ans==arr[i]){
            freq++;
        }
        else{
            freq--;
        }
    }
    printf("%d",ans);
    return 0;
}