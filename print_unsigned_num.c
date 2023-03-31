#include "main.h"
#include <stdarg.h>

/**
 * print_unsigned_number - prints an integer to the stdout
 * @n: integer to be printed
 *
 * Return: count of characters printed
 */
int print_unsigned_number(unsigned int n)
{
	unsigned int lastn;
	int count = 0;

	/*get last digit and remainder as absolute value*/
	lastn = n % 10;
	n = n / 10;
	/*use recursion if remainder value is not zero*/
	if (n != 0)
	{
		count = print_unsigned_number(n);
	}
	_putchar(48 + lastn);
	count++;
	return (count);
}

/**
 * print_unsigned_num - prints an integer to the stdout
 * @args: Va_list argument integer to be printed
 *
 * Return: count of characters printed
 */
int print_unsigned_num(va_list args)
{
	unsigned int n;
	int count;

	n = va_arg(args, unsigned int);
	count = print_unsigned_number(n);
	return (count);
}
