#include "main.h"

/**
* _printf - function that produces output according to a format
*
*@format: String character
*Return: Return j
*/

int _printf(const char *format, ...)
{
<<<<<<< HEAD
	if (format == NULL)
		return (-1);
=======
/*Si escribieron algo dentro de format*/
>>>>>>> abdd23e30326594ae0657af4636ca29258968af4

	va_list list;
	int (*f)(va_list);
<<<<<<< HEAD

	va_start(list, format);
	int i = 0, j = 0;
=======
	int i = 0, j = 0;
	va_start (list, format);

	if (format == NULL)
		return (-1);
>>>>>>> abdd23e30326594ae0657af4636ca29258968af4

	while (format[i] != '\0')
	{
		while (format[i] != '\0' && format[i] != '%')
		{
			_putchar(format[i]);
			j++;
			i++;
		}
		if (format[i] == '\0')
			return (j);

		f = get_op_func(&format[i + 1]);

		if (f != NULL)
		{
			j += f(list	);
			i += 2;
			continue;
		}
<<<<<<< HEAD
		if (format[i + 1] == '\0')
			return (-1);
		_putchar(format[i]);
=======

	    if (format[i + 1] == '\0')
			return (-1);

		_putchar(format[i]);
        
>>>>>>> abdd23e30326594ae0657af4636ca29258968af4
		j++;
		if (format[i + 1] == '%')
		{
			i += 2;
		}
		else
			i++;
	}
	va_end(list);
	return (j);
}
