#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

typedef struct op
{
  char *op;
  int (*f)(int a, int b);
} op_t;

int _putchar(char c);
void print_rev(char *s);
int _printf_s(char *str);
int _printf_c(char caracter);
int _printf_d_i(int n);
int (*get_op_func(char *s))(int, int);

#endif
