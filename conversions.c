#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_c - prints a character
 * @ap: character argument
 * Return: number of characters
 */
int print_c(va_list ap)
{
	int c;

	c = va_arg(ap, int);
	return (_putchar(c));
}
/**
 * print_s - prints a string
 * @ap: string argument
 * Return: number of characters
 */
int print_s(va_list ap)
{
	int i, count = 0;
	char *str;

	str = va_arg(ap, char*);
	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
		count++;
	}
	return (count);
}
/**
 * print_percent - prints %
 * @ap: % argument
 * Return: % string
 */
int print_percent(va_list ap)
{
	char *str;

	str = "%";
	if (va_arg(ap, int) == *str)
	{
		return (*str);
	}
	return (*str);
}
/**
 * print_d - prints a decimal to base 10
 * @ap: decimal arguments
 * Return: number of characters
 */
int print_d(va_list ap)
{

	unsigned int absolute, aux, countnum, count;
	int n;

	count = 0;
	n = va_arg(ap, int);
		if (n < 0)
		{
			absolute = (n * -1);
			count += _putchar('-');
		}
		else
			absolute = n;

	aux = absolute;
	countnum = 1;
	while (aux > 9)
	{
		aux /= 10;
		countnum *= 10;
	}
	while (countnum >= 1)
	{
		count += _putchar(((absolute / countnum) % 10) + '0');
		countnum /= 10;
	}
	return (count);
}
/**
 * print_i - prints integer
 * @ap: integer argument
 * Return: the decimal function
 */

int print_i(va_list ap)
{
	return (print_d(ap));
}

