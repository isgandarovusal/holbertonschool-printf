#include "main.h"
#include <limits.h>

/**
 * print_number - Helper function to print numbers recursively
 * @n: Number to print
 *
 * Return: Number of characters printed
 */
static int print_number(long n)
{
	int count = 0;
	unsigned long num;

	if (n < 0)
	{
		count += _putchar('-');
		num = -((unsigned long)n);
	}
	else
	{
		num = (unsigned long)n;
	}

	if (num / 10)
		count += print_number(num / 10);

	count += _putchar((num % 10) + '0');

	return (count);
}

/**
 * print_int - Prints an integer (handles both %d and %i)
 * @args: Argument list
 *
 * Return: Number of characters printed
 */
int print_int(va_list args)
{
	long n = va_arg(args, int); /* va_arg promotes to int */
	return (print_number(n));
}
