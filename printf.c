#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <stddef.h>
/**
 * _printf - prints based on a format specifier
 * @format: string with format specifier
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	if (format != NULL)
	{
		int count = 0, i;
		int (*fmt)(va_list);
		va_list ap;

		va_start(ap, format);
		i = 0;
		if (format[0] == '%' && format[1] == '\0')
			return (-1);
		while (format != NULL && format[i] != '\0')
		{
			if (format[i] == '%')
			{
				if (format[i + 1] == '%')
				{
					count += _putchar(format[i]);
					i += 2;
				}
				else
				{
					fmt = get_func_spec(format[i + 1]);
					if (fmt)
						count += fmt(ap);
					else
						count = _putchar(format[i]) + _putchar(format[i + 1]);
					i += 2;
				}
			}
			else
			{
				count += _putchar(format[i]);
				i++;
			}
		}
		va_end(ap);
		return (count);
	}
	return (-1);
}
