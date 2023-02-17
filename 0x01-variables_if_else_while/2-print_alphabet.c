#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	int i = 0;

	char str[24] = "abcdefghijklmnopqrstuvwxyz";

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}
}
