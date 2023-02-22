#include "main.h"
/**
 * print_last_digit - prints the last digit
 * @n: the argument that will be passed to the function and checked
 * Return: num
 */
int print_last_digit(int n)
{
	int num;

	if (n > 0)
	{
		num = n % 10;

		_putchar(num + '0');
		return (num);
	}
	else
	{
		num = 0;

		_putchar(num + '0');
		return (num);
	}
}
