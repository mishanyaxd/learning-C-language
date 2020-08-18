#include <stdio.h>

int main(void)
{
    float cups;

    printf("Enter cups and I will print what is equal to: ");
    scanf("%f", &cups);

    printf("%.2f cups equal to:\n%.2f pint(s)\n%.2f ounce(s)\n%.2f tablespoon(s)\n%.2f teaspoon(s)",
            cups,
            cups * 0.5, // 1 cup = 0.5 pint
            cups * 8.0, // cup = 8 onces
            cups * 16.0, // cup = 16 tablespoon
            cups * 48.0); // cup = 48 teaspoon

    return 0;
}
