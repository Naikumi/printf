#include "main.h"
/**
 * get_func_spec - looks for specifier
 * @x: function paremeter
 * Return: function
 */
int (*get_func_spec(char x))(va_list)
{
	int i = 0;
	speci form[] = {
		{"c", print_c},
		{"s", print_s},
		{"%", print_percent},
		{NULL, NULL}
	};
	while (form[i].ch)
	{
		if (x == form[i].ch[0])
			return (form[i].func);
		i++;
	}
	return (NULL);
}
