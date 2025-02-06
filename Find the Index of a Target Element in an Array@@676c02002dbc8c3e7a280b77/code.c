#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int t;
    int count=0;
    scanf("%d", &t);
    for (int i=0;i<n;i++){
        if (arr[i]==t){
            count++;
        }
    }
    if (count==0){
        printf("-1");
    }
    else{
    printf("%d", count);
    }
    return 0;
}