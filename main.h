#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

typedef struct op
{
  char *op;
  int (*f)(va_list);
} op_t;

int _putchar(char c);
int op_rev(va_list r);
int op_str(va_list s);
int op_char(va_list c);
int op_d_i(va_list d);
int (*get_op_func(const char *s))(va_list);

#endif
