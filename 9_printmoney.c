#include "main.h"

int main(void)
{
    int i = 42;
    float f = 3.14159;

    /* Printing integers with a minimum field width of 5 */
    printf("%5d\n", i);

    /* Printing floating-point numbers with a minimum field width of 8 and 2 digits after the decimal point */
    printf("%8.2f\n", f);

    return (0);
}

