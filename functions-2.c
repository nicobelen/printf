#include "main.h"

/**
*op_printf_number - Prints numbers
*
*@n: Number
*/

void op_printf_number(int n)
{
	unsigned int a;

	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}
	else if (n == 0)
	{
		_putchar('0');
	}
	while (n > 0)
	{
		n = ((n % 8) + '0');
		n /= 8;
		a = n;
		a = ((n % 8) + '0');
		a /= 8;
		_putchar(a);
	}
}

/**
* _print_R - Compare a string with evry latter of abc
* @R: The va_list
* Return: Length
*/

int _print_R(va_list R)
{
	char *strings;
	char l[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i;
	int j;

	strings = va_arg(R, char *);

	if (!strings)
		return (-1);

	for (i = 0; strings[i]; i++)
	{
		for (j = 0; j < 53; j++)
		{
			if (strings[i] == l[j])
			{
				_putchar(rot13[j]);
			}
			else
				_putchar(l[i]);
		}
	}
	return (i);
}
