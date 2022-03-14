#include "main.h"

/**
* _printf - function that produces output according to a format
*
*@format: String character
*
*/

int _printf(const char *format, ...)
{
	get_op_func(va_list);
	//Si escribieron algo dentro de format
	if (format == NULL)
		return (-1);
	va_list list;
	va_start (list, format);

	int i, j = 0;

	for(i = 0; format[i] != '\0';)

		//Si dentro de format hay un %
		if (format[i] == '%')
		{
			while (j < 15)
			{
				//javi cabeza de rodilla recorre la lista de la estructura
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

}
