#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');
	return (0);
}
