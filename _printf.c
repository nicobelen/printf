#include "main.h"

/**
* _printf - function that produces output according to a format
*
*@format: String character
*
*/

int _printf(const char *format, ...)
{
	//Si escribieron algo dentro de format
	if (format == NULL)
 	return (-1);

	va_list list;

	int (*f)(va_list);

	va_start (list, format);

	int i = 0, j = 0;

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

		f = get_op_func(format[i + 1]);

		if (f != NULL)
		{
			j += f(list);
			i += 2;
			continue;
		}

	        if (format[i + 1] == '\0')
		return (-1);

	        _putchar(format[i]);

        	j++;

		if (format[i + 1] == '%')
		{
			i += 2;
			printf("hola");
		}
		else
			i++;
	}

	va_end(list);

	return (j);

}
	/**
	for(i = 0; format[i] != '\0';)

		//Si dentro de format hay un %
		if (format[i] == '%')
		{
			while (j < 15)
			{
				if (op[j].func[0] == format[i + 1])
				{
					op[j].f(list);
					i++;
					break;
				}
			}
		}
		else
		{
			_putchar(format[i]);
			i++;
		}
		*/

