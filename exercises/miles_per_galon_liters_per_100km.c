#include <stdio.h>

#define GALLON_IN_LITERS 3.785
#define MILE_IN_KILOMETERS 1.609

int main(void)
{
    float miles_traveled, gallons_of_gasoline_consumed, mile_per_gallon;
    float km_traveled, liters_of_gasoline_consumed, liter_per_100km;

    printf("Enter the number of miles traveled:\n");
    scanf("%f", &miles_traveled);

    printf("Enter the number of gallons of gasoline consumed:\n");
    scanf("%f", &gallons_of_gasoline_consumed);

    mile_per_gallon = miles_traveled / gallons_of_gasoline_consumed;

    printf("Mile per gallon - %.1f.\n", mile_per_gallon);

    km_traveled = miles_traveled * MILE_IN_KILOMETERS;
    liters_of_gasoline_consumed = gallons_of_gasoline_consumed * GALLON_IN_LITERS;
    liter_per_100km = 100.0 * liters_of_gasoline_consumed / km_traveled;

    printf("Liter per 100 kilometers - %.1f\n", liter_per_100km);

    return 0;
}
