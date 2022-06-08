#include "main.h"
#include <stdio.h>

/**
 * main - first 50 fibonatchi.
 *
 * Return: void.
 *
 */
int main(void)
{
	int i;
	long a = 1, b = 2, c;
	long n11, n12, n21, n22, sum1, sum2;
	long split = 100000000000000000;

	printf("%ld\n%ld\n", a, b);
	n11 = a / split;
	n12 = a % split;
	n21 = b / split;
	n22 = b % split;
	for (i = 0; i <= 200; i++)
	{
		sum1 = n11 + n21 + ((n12 + n22) / split);
		sum2 = (n12 + n22) % split;
		if (sum1 != 0)
			printf("%ld%ld\n", sum1, sum2);
		else
			printf("%ld\n", sum2);

			n11 = n21;
			n12 = n22;
			n21 = sum1;
			n22 = sum2;
	}
	putchar('\n');
	return (0);
}
