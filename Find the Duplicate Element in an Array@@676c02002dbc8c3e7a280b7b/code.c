#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=1;i<=n;i++){
        scanf("%d",&arr[i]);
    }
    int rep=0;
    for (int j=1;j<=n;j++){
        for (int k=1;k<=n;k++){
            if (arr[j]==arr[k]){
                rep=arr[j];
            }
        }
    }
    printf("%d",rep);
    return 0;
}