#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    m=1<<b;
    printf("%d",a^m);
    return 0;
}