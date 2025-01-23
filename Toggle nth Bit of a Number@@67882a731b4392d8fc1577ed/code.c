#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    int m=1<<b;
    printf("%d",a^m);
    return 0;
}