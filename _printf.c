#include "main.h"
#define BUFFER_SIZE 1024

/**
* _printf - function that produces output according to a format
*
*@format: String character
*Return: Return j
*/

int _printf(const char *format, ...)
{
	va_list list;
	int (*f)(va_list);
	int i = 0, j = 0;

	va_start(list, format);

	if (format == NULL)
		return (-1);

	while (format[i] != '\0')
	{
		if (format[i] != '\0' && format[i] != '%')
		{
			_putchar(format[i]);
			j++;
			i++;
			continue; }
		if (format[i] == '\0')
			return (j);
		f = get_op_func(&format[i + 1]);
		if (f != NULL)
		{
			j += f(list);
			i += 2;
			continue;	}
		if (format[i + 1] == '\0')
			return (-1);
		_putchar(format[i]);
		j++;

		if (format[i + 1] == '%')
		{
			i += 2;	}
		else
			i++;	}
	va_end(list);
	return (j);
}
