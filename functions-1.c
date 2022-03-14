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

}
/**
* print_number - function that prints an int
* @n: parameter
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
