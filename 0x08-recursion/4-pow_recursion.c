#include "main.h"
/**
 * _pow_recursion - returns value of one paramater raised to another
 * @x: the first parameter
 * @y: the second parameter
 * Return: value of x raised to the power y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
