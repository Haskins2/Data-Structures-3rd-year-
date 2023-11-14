#include <stdio.h>

int main() {
    int age;
    char name[25];
    
    printf("Name >> ");
    scanf("%24s", name);
    printf("Age >> ");
    scanf("%d", &age);

    printf("Hello %s (%d)", name, age);

    return 0;
}