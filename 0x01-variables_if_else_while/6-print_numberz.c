#include <stdio.h>
/**
 * main - Entry Point
 *
 * Description: This program prints all single digit numbers of
 * base 10 starting from 0, then it's followed by a new line.
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	int num;

	for (num = 48; num < 58; num++)
	{
		putchar(num);
	}

	putchar('\n');

	return (0);
}
