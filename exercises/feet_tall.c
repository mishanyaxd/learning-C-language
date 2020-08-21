#include <stdio.h>

int main(void)
{
    char name[40];
    int height;

    printf("Enter your name:\n");
    scanf("%s", name);

    printf("Enter your height in centimeters:\n");
    scanf("%d", &height);

    printf("%s, you are %.2f meters feet tall.", name, height * 0.01);

    return 0;
}
