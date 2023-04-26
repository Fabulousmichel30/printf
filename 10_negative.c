#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    float num1 = 3.14159;
    int num2 = 42;

    /* Print num1 with 2 decimal places */
    printf("num1 with precision 2: %.2f\n", num1);

    /* Print num2 with a minimum of 5 digits */
    printf("num2 with minimum width 5: %05d\n", num2);

    return (0);
}

