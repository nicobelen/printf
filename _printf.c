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
	while (format[i] != '\0') /**Mientras format sea distinto de null entra*/
	{
		if (format[i] != '\0' && format[i] != '%')
			/**si se cumplen ambas condiciones*/
		{
			_putchar(format[i]); /**Imprime posicion de format*/
			j++;
			i++;
			continue; }
		if (format[i] == '\0') /**Si no hay nada en format, imprime contador vacio*/
			return (j);
		f = get_op_func(&format[i + 1]);
		/**Cuando es % llama a la funcion correspondiente*/
		if (f != NULL)
		{	/**Si contiene una funcion, ejecuta y avanza 2 posiciones*/
			j += f(list);
			i += 2;
			continue;	}
		if (format[i + 1] == '\0') /**Si no existe funcion, retorna -1*/
			return (-1);
		_putchar(format[i]); /**Imprime el caracter*/
		j++;

		if (format[i + 1] == '%') /**Si el siguiente caracter es % lo ignora*/
		{
			i += 2;	}
		else
			i++;	}
	va_end(list);
	return (j);
}
