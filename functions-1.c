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
* op_d_i - function that prints an int
* @d: parameter
* Return: void
*/
int op_d_i(va_list d)
{
	int n;
	int dc = 1, dig = 0;
	unsigned int nat;

	n = va_arg(d, int);

	if (n < 0)
	{
		dig += _putchar('-');
		nat = n * -1;
	}
	else
		nat = n;

	while (nat / dc > 9)
	{
		dc = dc * 10;
	}
	while (dc >= 1)
	{
		dig += _putchar((nat / dc) + '0');
		nat = nat % dc;
		dc /= 10;
	}
	return (dig);
}
