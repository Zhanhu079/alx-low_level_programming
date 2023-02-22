#include "main.h"
/**
 * main - Entry
 * _putchar: print the letters
 * print_alphabet: prints the alphabets
 * Return: Always 0
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
int main(void)
{
	print_alphabet();
	return (0);
}
