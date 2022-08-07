#include "main.h"

/**
 * _printf - function to send formatted output to the screen.
 * @format: pointer to the string tobe formated and printed.
 * Return: number of characters printed.
 */

int _printf(const char *format, ...)
{
	va_list	arg;
	int i;
	int c;

	i = 0;
	c = 0;
	va_start(arg, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '\0')
				return (0);
			else if (format[i] == '%')
				i = _putchar(format[i], i, &c);
			else
				i = check_formater(format[i], &arg, i, &c);
		}
		else
			i = _putchar(format[i], i, &c);
	}
	if (format[i] == '\0')
		return (0);
	va_end(arg);

	return (c);
}
