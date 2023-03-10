#include "main.h"
/**
 * print_sign -  checks argument and returns something
 * @n: the parameter that will be checked
 * Return: 1 if value is greater than zero
 * or 0 if value is zero
 * otherwise it returns -1.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
