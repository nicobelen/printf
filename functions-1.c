#include "main.h"

/**
*_printf_c - funcion que corresponde a printf %c
*
*@caracter: caracter a printear perteneciente a la tabla ASCII
*Return: 1
*/

int op_char(va_list c)
{
	
	char character;	

	character = va_arg(c, int);

	_putchar(character);
	
	return (1);
}

/**
*_printf_s - function that prints a string
*
*@str: string to print
*Return: i
*/

int op_str(va_list s)
{
        int i = 0;
	char *string;
	
	string = va_arg(s, char *);

	if (string == NULL)
		string = "(nil)";

        while (string[i] != '\0')
        {
                _putchar(string[i]);
                i++;
        }
        _putchar('\n');
        return (i);
}

/**
 *print_rev - Hear is a rev
 *
 *@s: Is a s
 *
 *_putchar: return
*/

int op_rev(va_list r)
{
	char *s;
	int lon = 0;
	int j;

	while (*s != '\0')
	{
		lon++;
		++s;
	}
	s--;
	for (j = lon; j > 0; j--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
/**
* print_number - function that prints an int
* @n: parameter
* Return: void
*/

int op_d_i(va_list d)
{
	unsigned int n;	
	int i;	
	unsigned int dc, dig, nat = n;	
	double f = 1;

	if (n == 0)
		_putchar('0');
	else
	{
		if (n < 0)
			{
				nat = n * -1;
				_putchar('-');
			}
		while (f <= nat)
		{
			f *= 10;
			dc = f / 10;
		}
		while (dc >= 1)
		{
			dig = nat / dc;
			_putchar(dig + '0');
			nat = (nat - (dc * dig));
			dc /= 10;
		}
	}
		_putchar('\n');
	for (i = 0; i < n; i++)
		return (i);
}


