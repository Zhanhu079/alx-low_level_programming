#include "main.h"
#include <string.h>

/**
 * _puts_recursion - prints a string
 * @s: the string to be printed
 *Return: void
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
