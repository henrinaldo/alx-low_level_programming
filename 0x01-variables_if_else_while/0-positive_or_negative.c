#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* more headers goes there */

/**
 * main - Entry Point
 *
 * Description: The program is printing 
 * positive(+), negative(-) or zero(0).
 *
 * Return: Always 0(Success)
 */
int main(void)
{
        int n;

        srand(time(0));
        n = rand() - RAND_MAX / 2;

        /* your code goes there */
        if (n > 0)
        {
                printf("%d is positive\n", n);
        }
        else if (n == 0)
        {
                printf("%d is zero\n", n);
        }
        else (n < 0)
        {
                printf("%d is negative\n", n);
        }
        return (0);
}
