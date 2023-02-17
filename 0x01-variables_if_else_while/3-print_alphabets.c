#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	int i = 0;

	char f[60] = "abcdefghijklm";

	char s[] = "nopqrstuvwxyz\n";

	strcat(f, s);
	while (f[i] != '\0')
	{
		putchar(f[i]);
		i++;
	}
	i = 0;

	while (f[i] != '\0')
	{
		putchar(toupper(f[i]));
		i++;
	}
	return (0);
}
