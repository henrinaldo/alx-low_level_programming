#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: This progrm prints alphabets in lower case,
 * then it's followed by a new line.
 * except "q" and "e"
 *
 * Return: Always 0(Success)
 */

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q' && ch != 'e')
		{
			putchar(ch);
		}
	}

	putchar('\n');

	return (0);
}
