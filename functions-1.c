#include "main.h"

/**
*_printf_c - funcion que corresponde a printf %c
*
*@caracter: caracter a printear perteneciente a la tabla ASCII
*Return: 1
*/

int _printf_c(char caracter)
{
        if (caracter >= 32 && caracter <= 126)
        {
                _putchar(caracter);
                _putchar('\n');
        }
        return (1);
}

/**
*_printf_s - function that prints a string
*
*@str: string to print
*Return: i
*/

int _printf_s(char *str)
{
        int i = 0;
        while (*(str + i) != '\0')
        {
                _putchar(*(str + i));
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

void printf_rev(char *s)
{

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
void printf_number(int n)
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
		n = ((n % 10) + '0');
		n /= 10;
		a = n;
		a = ((n % 10) + '0');
		a /= 10;
		_putchar(a);
	}
}
