#include <stdio.h>

int gcd(int a, int b);

int main(void)
{
    int first_number, second_number, gcd_number;

    printf("\tEnter two numbers for GCD function\n");

    printf("Enter first number: ");
    scanf("%d", &first_number);

    printf("Enter second number: ");
    scanf("%d", &second_number);

    gcd_number = gcd(first_number, second_number);

    printf("GCD is %d\n", gcd_number);

    return 0;
}

int gcd(int a, int b) {
  int c;
  while (b) {
     c = a % b;
     a = b;
     b = c;
  }
  return a;
}
