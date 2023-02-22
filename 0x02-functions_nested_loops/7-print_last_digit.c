#include <stdlib.h>
#include "main.h"
/**
 * print_last_digit - prints the last digit
 * @n: the argument that will be passed to the function and checked
 * Return: j
 */
int print_last_digit(int n)
{
	int j;

	j = n % 10;
	if (n < 0)
	{
		j = -j;
	}
	_putchar(j);
	return (j);
}