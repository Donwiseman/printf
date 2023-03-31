#include "main.h"
#include <stdarg.h>

/**
 * print_oct - prints an integer in octal to the stdout
 * @n: unsigned integer to be printed
 *
 * Return: count of characters printed
 */
int print_oct(unsigned int n)
{
	unsigned int lastn;
	int count = 0;

	/*get last digit and remainder as absolute value*/
	lastn = n % 8;
	n = n / 8;
	/*use recursion if remainder value is not zero*/
	if (n != 0)
	{
		count = print_oct(n);
	}
	_putchar(48 + lastn);
	count++;
	return (count);
}

/**
 * print_octal - prints an integer in octal to the stdout
 * @args: va_list argument with an unsigned integer to be printed
 *
 * Return: count of characters printed
 */
int print_octal(va_list args)
{
	unsigned int n;
	int count;

	n = va_arg(args, unsigned int);
	count = print_oct(n);
	return (count);
}
