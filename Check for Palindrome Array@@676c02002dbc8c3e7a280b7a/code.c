// Your code here...
#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int i=0,j=n-1;
    int ans=0;
    while (i<j){
        if (arr[i]!=arr[j]){
            ans++;
            break;
        }
        i++;
        j--;
    }
    if (ans==0){
        printf("YES");
    }
    else{
        printf("NO");
    }
}