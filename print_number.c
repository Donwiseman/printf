#include "main.h"
#include <stdarg.h>

/**
 * _abs - returns absolute of a number except INT_MIN
 * @n: number to be processed
 *
 * Return: returns absolute int value
 */
int _abs(int n)
{
	int abs_num;

	abs_num = (n < 0) ? (n * -1) : n;
	return (abs_num);
}

/**
 * print_num - prints an integer to the stdout
 * @n: integer to be printed
 *
 * Return: count of characters printed
 */
int print_num(int n)
{
	int lastn, count = 0;

	/*check if negative*/
	if (n < 0)
	{
		_putchar('-');
		/* Added a count++ to ensure the negative value gets counted too */
		count++;
	}
	/*get last digit and remainder as absolute value*/
	lastn = _abs(n % 10);
	n = _abs(n / 10);
	/*use recursion if remainder value is not zero*/
	if (n != 0)
	{
		count = print_num(n);
	}
	_putchar(48 + lastn);
	count++;
	return (count);
}

/**
 * print_number - prints an integer to the stdout
 * @args: va_list argument
 *
 * Return: count of characters printed
 */
int print_number(va_list args)
{
	int count, n;

	n = va_arg(args, int);
	count = print_num(n);
	return (count);
}
