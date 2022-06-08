#include "main.h"


/**
 * _isalpha - checks for alphabetic character.
 * _isalpha
 * retun 0 (always).
 */

int _isalpha(int c)

{
	if (((c >= 97) && (c <= 122)) || ((c >= 65) && (c <= 90)))
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
