#include <unistd.h>
#include "main.h"

/**
 *main - print _putchar as a message
 *
 * return 0 (Always)
 *
 */

int _putchar(char c)


{
	return (write(1, &c, 1));

}
