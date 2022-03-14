#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
/**
<<<<<<< HEAD
 *struct op - Estruct
 *@ops: format
 *@f: function
 */
typedef struct op
=======
* struct op_var - structure of the list
* @op: format
*
*/
typedef struct op_var
>>>>>>> abdd23e30326594ae0657af4636ca29258968af4
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

#endif
