#include <stdio.h>

#define MIN_PER_HOUR 60

int main(void)
{
    int minutes, hours, minutes_left;

    printf("Convert minutes to hours and minutes.\n");
    printf("Enter the number of minutes (<= 0 to quit):\n");

    scanf("%d", &minutes);

    while (minutes > 0) {
        hours = minutes / MIN_PER_HOUR;
        minutes_left = minutes % MIN_PER_HOUR;

        printf("%d minutes is %d hours, %d minutes\n", minutes, hours, minutes_left);
        printf("Enter the next value (<= 0 to quit):\n");

        scanf("%d", &minutes);
    }

    printf("Done!");

    return 0;
}
