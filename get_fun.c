#include "main.h"
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 **get_print - get fun
 *@format: format to check
 *Return: null
 */
int (*get_print(char format))(va_list)
{
	int i = 0;
	print func_type[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_mod},
		{"d", print_int},
		{"i", print_int},
		{"r", print_reverse},
		{NULL, NULL}
	};
	while (func_type[i].indi)
	{
		if (format == func_type[i].indi[0])
			return (func_type[i].handler);
		i++;
	}
	return (NULL);
}
