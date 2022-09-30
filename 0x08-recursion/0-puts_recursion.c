#include <stdio.h>
#include "main.h"
/**
 * _puts_recursion - puts a string to stdout recursively
 *
 * @s: string to put to stdout
 *
 * Return: always void
 */
void _puts_recursion(char *s)
{
	if (!*s) /* if s points to null char */
	{
		putchar('\n');
		return;
	}
	putchar(*s);
	_puts_recursion(s + 1);
}
