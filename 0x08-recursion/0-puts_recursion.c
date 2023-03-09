#include "main.h"
#include <string.h>

/**
 * _puts_recursion - prints a string
 * @s: the string to be printed
 *Return: void
 */
void _puts_recursion(char *s)
{
	int i;

	int length = strlen(s);

	for (i = 0; i <= length; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
