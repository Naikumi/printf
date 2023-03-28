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
