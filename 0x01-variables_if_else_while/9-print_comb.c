#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: This program prints all possible combinations
 * of single-digit numbers.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int digit;

	for (digit = 48; digit < 58; digit++)
	{
		putchar(digit);

		if (digit != 57)
		{
			putchar(44);
			putchar(32);
		}
	}

	putchar('\n');

	return (0);
}
