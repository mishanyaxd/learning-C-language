#include <stdio.h>

int main(void)
{
    float download_speed_mbit, file_size_mbyte, download_time;

    printf("Enter a download speed in megabits per second:\n");
    scanf("%f", &download_speed_mbit);

    printf("Enter the size of the file in megabytes:\n");
    scanf("%f", &file_size_mbyte);

    download_time = file_size_mbyte / download_speed_mbit * 8;

    printf("At %.2f megabits per second, a file of %.2f megabytes"
    "downloads in %.2f seconds.", download_speed_mbit,
    file_size_mbyte, download_time);

    return 0;
}
