#include "main.h"

/**
 * times_table - prints the times table up to 9
 *
 * Return: void
 *
 */
void times_table(void)
{
	char i;
	char j;

	for (i = 0 ; i <= 9 ; i++)
	{
		for (j = 0 ; j <= 9 ; j++)
		{
			if (i * j <= 9)
			{
				if (j != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(i * j + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(i * j / 10 + '0');
				_putchar(i * j % 10 + '0');
			}
			if (i == 9 && j == 9)
			{
				break;
			}
		}
		_putchar('\n');
	}
}
