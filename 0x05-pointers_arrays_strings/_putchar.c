#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: the charater to print
 *
 * Return: on success 1, if not 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
