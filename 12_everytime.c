#include "main.h"

int main(void)
{
    int num = 123;
    float f = 3.14;
    char str[] = "Hello";

    /* Using the "-" flag character for left-justification */
    printf("%-10d%-10f%-10s\n", num, f, str);

    return (0);
}

