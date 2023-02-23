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

	if (n < 90)
	{
		for (i = n; i <= 98; i++)
		{
			if (i != 98)
			{
				printf("%d, ", i);
			}
			else
			{
				printf("%d\n", i);
			}
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			if (i != 98)
			{
				printf("%d, ", i);
			}
			else
			{
				printf("%d\n", i);
			}
		}
	}
}
