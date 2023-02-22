#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - will print all natural up to 98
 * @n: is the starting point of the countdown
 * Return: void
 */
void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		if (i != 98)
		{
			printf("%d, ", i);
		}
		else
		{
			printf("%d", i);
			_putchar('\n');
		}
	}
}
