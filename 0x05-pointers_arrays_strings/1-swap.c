#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: the first parameter
 * @b: the second parameter
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
