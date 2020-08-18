#include <stdio.h>

int main(void)
{
    float height;

    printf("Enter your height in centimeters\n");
    scanf("%f", &height);
    printf("Your height in inches is %.2f", height / 2.54); // one inch  = 2.54 centimeters

    return 0;
}
