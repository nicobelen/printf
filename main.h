#ifndef MAIN_H
#define MAIN_H
#define BUFFER_SIZE 1024

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
/**
*struct op_var - Estruct
*@ops: format
*@f: function
*/
typedef struct op_var
{
	char *ops;
	int (*f)(va_list);
} op_t;

int (*get_op_func(const char *format))(va_list);
int _printf(const char *format, ...);
int _putchar(char c);
int op_rev(va_list r);
int op_str(va_list s);
int op_char(va_list c);
int op_d_i(va_list d);
int op_bin(va_list b);

#endif
