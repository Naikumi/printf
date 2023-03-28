#include <unistd.h>

/**
 * _putchar - prints char
 * @c: the character to print
 *
 * Return: 1 on success, -1  error and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
