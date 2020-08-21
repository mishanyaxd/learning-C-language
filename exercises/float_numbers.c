#include <stdio.h>

int main(void)
{
    double number;

    printf("Enter a float number:\n");
    scanf("%lf", &number);

    printf("The input is %+lf or %+E", number, number);

    return 0;
}
