#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	int i = 0;

	char f[27] = "abcdefghijklm";

	char s[] = "nopqrstuvwxyz";

	strcat(f, s);
	while (f[i] != '\0')
	{
		putchar(f[i]);
		i++;
	}
	return (0);
}
