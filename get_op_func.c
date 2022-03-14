#include "main.h"

/**
*
*
*
*
*/

int (*get_op_func(const char *s))(va_list)
{
	op_t ops[] = {
		{"c", op_char},
		{"s", op_str},
		{"d", op_d_i},
		//{"i", op_f},
		{"r", op_rev},
		{NULL, NULL}
	};

	int i;
/**
	
	while (ops[i].op != NULL)
	{
		if (*(ops[i].op) == *s)
		{
			break;
		}	
		i++;
	}
	return (ops[i].f);
*/


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
