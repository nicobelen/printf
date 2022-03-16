#include "main.h"

/**
* op_char - funcion que corresponde a printf %c
* @c: caracter a printear perteneciente a la tabla ASCII
* Return: 1
*/
int op_char(va_list c)
{
	char character;

	character = va_arg(c, int);

	_putchar(character);

	return (1);
}
/**
* op_str - function that prints a string
* @s: string to print
* Return: i
*/
int op_str(va_list s)
{
	int i = 0;
	char *string;

	string = va_arg(s, char *);

	if (string == NULL)
		string = ("(null)");

	while (string[i] != '\0')
	{
		_putchar(string[i]);
		i++;
	}
	return (i);
}
/**
* op_rev - Hear is a rev
* @r: Is a string
* Return: i
*/
int op_rev(va_list r)
{
	char *s;
	int i = 0;
	int j;

	s = va_arg(r, char *);

	printf("entre a la funcion");

	while (*s != '\0')
	{
		i++;
		++s;
	}
	s--;
	for (j = i; j > 0; j--)
	{
		_putchar(*s);
		s--;
	}
	return (i);
	}
/**
* rec - recursion of / 10
* @x: recieved number
* Return: void
*/
void rec(int x)
{
	if (x < 0)
	{
		_putchar('-');
		x *= -1;
	}
	if ((x / 10) > 0)
		rec(x / 10);
	_putchar(x % 10 + 48);
}
/**
* op_d_i - function that prints an int
* @d: parameter
* Return: void
*/
int op_d_i(va_list d)
{
	int n;
	int i = 0;

	n = va_arg(d, int);

	rec(n);

	while (n / 10)
	{
		n /= 10;
		i++;
	}
	return (i + 1);
}
