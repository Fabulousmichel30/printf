#include "main.h"
/* 
 * main - Entry point
 *
 * Return: EXIT_SUCCESS on success
 */
int main(void)
{
    /* initialize variables */
    int i = 42;
    float f = 3.14159;
    /* print integer with zero padding */
    printf("%05d\n", i);
    /* print float with zero padding */
    printf("%09.4f\n", f);
    return (EXIT_SUCCESS);
}

