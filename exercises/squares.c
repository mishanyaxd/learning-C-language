#include <stdio.h>

int main(void)
{
    int num = 1;

    while (num < 101) {
        printf("%d %d\n", num, num * num);
        num += 1;
    }

    return 0;
}
