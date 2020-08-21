#include <stdio.h>
#include <float.h>

int main(void)
{
    double double_value = 1.0 / 3.0;
    float float_value = 1.0 / 3.0;

    printf("%.4lf %.4f\n%.12lf %.12f\n%.16lf %.16f\n",
    double_value, float_value,
    double_value, float_value,
    double_value, float_value);

    printf("%dd %dd", FLT_DIG, DBL_DIG);

    return 0;
}
