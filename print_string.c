#include "main.h"

/**
 * print_string - prints string
 * @val: arguments
 * Return: length of the string
 */
int print_string(va_list val)
{
	char *str = va_arg(val, char *);
	int length = 0, i;

	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
		length++;
	}
	return (length);
}
