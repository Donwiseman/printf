#include "main.h"
#include <stdarg.h>

/**
 * print_bin - prints an integer in binary to the stdout
 * @n: integer to be printed
 *
 * Return: count of characters printed
 */
int print_bin(unsigned int n)
{
	unsigned int lastn;
	int count = 0;

	/*get last digit and remainder as absolute value*/
	lastn = n % 2;
	n = n / 2;
	/*use recursion if remainder value is not zero*/
	if (n != 0)
	{
		count = print_bin(n);
	}
	_putchar(48 + lastn);
	count++;
	return (count);
}

/**
 * print_binary - prints an integer in binary to the stdout
 * @args: va_list object
 *
 * Return: count of characters printed
 */
int print_binary(va_list args)
{
	int count;
	unsigned int n;

	n = va_arg(args, unsigned int);
	count = print_bin(n);
	return (count);
}
