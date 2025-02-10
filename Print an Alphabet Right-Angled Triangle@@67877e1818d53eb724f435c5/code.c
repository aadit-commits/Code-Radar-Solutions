#include <stdio.h>

int main() {
    int n;
    int p=65;
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        for (int j=1;j<=i;j++){
            printf("%d ",p+j);
        }
        printf("\n");
    }
    return 0;

}
