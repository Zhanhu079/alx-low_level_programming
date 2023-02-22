#include "main.h"
/**
 * _isalpha - checks if argument is an alphabet
 * @c: the parameter that will checked
 * Return: 1 if c is an alphabet
 * and 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
