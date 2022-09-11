#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: This program Prints alphabets in lower case,then it's followed
 * by a new line.
 *
 * Return: Always 0(Success)
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
