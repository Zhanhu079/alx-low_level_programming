#include "main.h"
/**
 * _islower - checks if argument is lowercase
 * @c: the argument that is checked
 * Return: 1 if it is lowercase and 0 if it is not
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
