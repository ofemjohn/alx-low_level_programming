#include "main.h"
1#include <math.h>

/**
 * main - factor
 *
 * Return: 0
 *
 */
int main(void)
{
	long n = 612852475143;
	int maxPrime = -1;
	int i;

	for (i = 3; i <= sqrt(n); i += 2)
	{
		while (n % i == 0)
		{
			maxPrime = i;
			n = n / i;
		}

	}
	if (n > 2)
		maxPrime = n;
	printf("%d\n", maxPrime);
	return (0);

}