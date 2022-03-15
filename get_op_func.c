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

	op_t op[] = {
		{"c", op_char},
		{"s", op_str},
		{"d", op_d_i},
		{"i", op_d_i},
		{"r", op_rev},
		{"R", _print_R},
		{NULL, NULL}
	};

	while (op[i].ops != NULL)
	{
		if (op[i].ops[0] == *format)
		{
			return (op[i].f);
		}
		i++;
	}
	return (NULL);
}
