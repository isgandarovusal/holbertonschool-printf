#include "main.h"
#include <stdarg.h>

/**
 * _printf - produces output according to a format
 * @format: format string containing the characters and the specifiers
 * Description: this function will call the get_print() function that will
 * determine which printing function to call depending on the conversion
 * specifiers contained into fmt
 * Return: length of the formatted output string
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, length = 0;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '\0')
				return (-1);
			
			if (format[i] == 'c')
				length += print_char(args);
			else if (format[i] == 's')
				length += print_string(args);
			else if (format[i] == '%')
				length += print_37();
			else
			{
				length += _putchar('%');
				length += _putchar(format[i]);
			}
		}
		else
			length += _putchar(format[i]);
		i++;
	}
	va_end(args);
	return (length);
}
