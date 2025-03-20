// Your code here...
#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int i=0,j=n-1;
    while (i<j){
        if (arr[i]!=arr[j]){
            printf("NO");
            break;
        }
        i++:
        j--;
    }
    printf("YES");
}