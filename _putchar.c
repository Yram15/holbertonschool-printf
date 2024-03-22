#include "main.h"
#include <unistd.h>

/**
 * _putchar - print character c to stdout
 * @c: The char to be printed
 *
 * Return: On success 1.
 * On error, -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
