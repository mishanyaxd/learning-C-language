#include <stdio.h>

int main(void)
{
    char name[40], surname[40];

    printf("Enter your first and last name:\n");

    scanf("%s %s", name, surname);

    printf("%s, %s", surname, name);

    return 0;
}
