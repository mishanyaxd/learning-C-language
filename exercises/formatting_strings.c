#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[40], surname[40];
    int name_length, surname_length;

    printf("Enter your name:\n");
    scanf("%s", name);

    printf("Enter your last name:\n");
    scanf("%s", surname);

    name_length = strlen(name), surname_length = strlen(surname);

    printf("%s %s\n%*d %*d\n", name, surname, name_length, name_length,
    surname_length, surname_length);

    printf("%s %s\n%-*d %-*d\n", name, surname, name_length, name_length,
    surname_length, surname_length);

    return 0;
}
