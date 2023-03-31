#include <stdarg.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_args - prints the variadic function based on the specifier given
 * @arr: array of spec_t containing specifiers and matched functions
 * @spec: specifier char
 * @args: va_list parameter
 *
 * Return: returns count of characters printed
 */
int print_args(spec_t *arr, char spec, va_list args)
{
	int print_count = 0, index;
	int (*func)(va_list) = NULL;

	if (spec == '%')
	{
		_putchar('%');
		print_count++;
		return (print_count);
	}
	for (index = 0; arr[index].func != NULL; index++)
	{
		if (spec == arr[index].spec)
		{
			func = arr[index].func;
			break;
		}
	}
	if (func == NULL)
	{
		_putchar('%');
		_putchar(spec);
		print_count += 2;
		return (print_count);
	}
	print_count = func(args);
	return (print_count);
}

/**
 * _printf - function similar to the printf();
 * @format: format specifier string
 *
 * Return: count of characters printed to the stdout
 */
int _printf(const char *format, ...)
{
	spec_t arr[] = {
		{'c', print_char},
		{'s', _puts},
		{'d', print_number},
		{'i', print_number},
		{'u', print_unsigned_num},
		{'b', print_binary},
		{'o', print_octal},
		{'x', printf_hex},
		{'X', printf_HEX},
		{'\0', NULL}
	};
	const char *fp = format;
	int print_count = 0;
	char spec;
	va_list args;

	if (format == NULL)
		return (-1);

	va_start(args, format);
	while (fp && *fp)
	{
		if (*fp == '%')
		{
			fp++;/*move to next char after %*/
			spec = *fp;
			if (spec)
			{
				print_count += print_args(arr, spec, args);
				fp++;
			}
		}
		else
		{
			_putchar(*fp);
			print_count++;
			fp++;
		}
	}
	va_end(args); /* Added va_end */
	return (print_count);
}
