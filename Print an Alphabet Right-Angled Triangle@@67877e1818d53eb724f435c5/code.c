
#include <stdio.h>

int main() {
    int n;
    int p=64;
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        for (int j=1;j<=i;j++){
            printf("%c ",p+j);
        }
        printf("\n");
    }
    return 0;
}
