#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
/**
 * struct conve_speccifier - specifies the struct
 * @ch: the character to input
 * @func: the associated functions
 *
 */
typedef struct conve_specifier
{
	char *ch;
	int (*func)(va_list);
}speci;
int _putchar(char c);
int _printf(const char *format, ...);
int print_c(va_list ap);
int print_s(va_list ap);
int print_percent(va_list ap);
int (*get_func_spec(char x))(va_list);
#endif
