#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
 * main - Entry
 * Return: 0
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf(" % d % s", n, "is positive");
		printf("\n");
	}
	else if (n == 0)
	{
		printf(" % d % s", n, "is zero");
		printf("\n");
	}
	else
	{
		printf(" % d % s", n, "is negative");
		printf("\n");
	}
	return (0);
}
