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
* op_bin - convert unsigned int to binary
* @b: argument
* Return: 0
*/
int op_bin(va_list b)
{
	int n;
	int rem, bin = 0, place = 1;

	n = va_arg(b, int);

	n = malloc(sizeof(int) + 1);

	while (n != 0)
	{
		rem = n % 2;
		n /= 2;
		bin += rem * place;
		place *= 10;
	}
	return (bin);
}
