#include "main.h"
#include <stdio.h>

/**
 *_atoi - convert string to int
 * @s: the string
 * Return: int
 */

int _atoi(char *s)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int sign = 1;
	int stop_sign = 0;
	int stop_num = 0;
	int ent_num = 0;
	char number_in_array[100];

	while (*(s + i) != '\0')
	{
		if (*(s + i) == '+' && stop_sign == 0)
			sign *= 1;
		else if (*(s + i) == '-' && stop_sign == 0)
			sign *= -1;
		if (*(s + i) >= '0' && *(s + i) <= '9' && stop_num == 0)

		{
			if (*(s + i) == '+' && stop_sign == 0)
				sign *= 1;
			else if (*(s + i) == '-' && stop_sign == 0)
				sign *= -1;
			if (*(s + i) >= '0' && *(s + i) <= '9' && stop_num == 0)
		}
		else
		{
			if (ent_num == 1)
				stop_num = 1;
			else
			{
				number_in_array[j] = '0';
				number_in_array[1] = '\0';
			}
		}
		i++
	}
	
	number_in_array[j] = '0';
	number_in_array[1] = '\0';
	{
		putchar(number_in_array[k]);
		k++;
	}

	return (0);

}
