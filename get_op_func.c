#include "main.h"

/**
* get_op_func - Character asign to function
* @format: formato
* Return: NULL
*
*/
int (*get_op_func(const char *format))(va_list)
{
	int i = 0;

	op_t ops[] = {
		{"c", op_char},
		{"s", op_str},
		{"d", op_d_i},
		{"i", op_d_i},
		{"r", op_rev},
		{NULL, NULL}
	};

	while (ops[i].op != NULL)
	{
		if (ops[i].op[0] == *format)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
