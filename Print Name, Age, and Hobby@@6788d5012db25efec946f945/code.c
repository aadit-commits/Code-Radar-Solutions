#include <stdio.h>


int main() {
    char name,hobby;
    int age;
    scanf("%c %d %c", &name,&age, &hobby);
    printf("Name: %c\n", name);
    printf("Age: %d\n", age);
    printf("Hobby: %c", hobby);
    return 0;
}