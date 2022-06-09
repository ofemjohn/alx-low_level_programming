#include "main.h"

/**
 * _isdigit - Function checks if character is a digit
 * @c: What to check
 *
 * Return: 1 if c is a digit, 0 otherwise
 */

int _isupper(int c)

{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
