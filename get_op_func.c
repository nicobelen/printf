#include "main.h"

/**
*
*
*
*
*/
int (*get_op_func(char *s))(va_list)
{
	op_t ops[] = {
		{"c", _printf_c},
		{"s", _printf_s},
		{"d", _printf_d_i},
		{"i", _printf_d_i},
		{"r", print_rev},
		{NULL, NULL}
	};

	int i;

	i = 0;

	while (i < 5)
	{
		if (ops[i].op[0] == s[0])
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
