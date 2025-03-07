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
        else {
            freq--;
        }
    }
    freq = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == ans) {
            freq++;
        }
    }
    if (freq > n / 2) {
        printf("%d", ans);
    } else {
        printf("-1");
    }
    return 0;
}