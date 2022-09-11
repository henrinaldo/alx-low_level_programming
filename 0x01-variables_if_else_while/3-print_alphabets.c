#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: This program prints alphabets in lower case, and
 * uppercase,it's then followed by a new line.
 *
 * Return: Always 0(Success)
 */

int main(void)
{
	int lw_ch, up_ch;

	for (lw_ch = 97; lw_ch <= 122; lw_ch++)
	{
		putchar(lw_ch);
	}

	for (up_ch = 65; up_ch <= 90; up_ch++)
	{
		putchar(up_ch);
	}

	putchar('\n');

	return (0);
}
