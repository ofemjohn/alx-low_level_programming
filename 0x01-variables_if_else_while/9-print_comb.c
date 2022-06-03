#include <stdio.h>

/**
 *main - main - Prints numbers between 0 to 9 with commas and spaces.
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
	int num;

	for (num = 0; num <= 9; num++)
	{
	putchar((num % 10) + '0');
	if (num == 9)
	continue;

	putchar(',');
	putchar(' ');
	}

	putchar('\n');

	return (0);

}


