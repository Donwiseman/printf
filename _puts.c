#include "main.h"
#include <stdlib.h>
#include <stdarg.h>

/**
 * _puts -  write a string to the stdout
 * @str: String to print
 *
 * Return: count of characters printed
 */
int _puts(va_list str)
{
	char *string = va_arg(str, char *);
	int count = 0;

	/* A precaution if a NULL string is passed */
	/* as an argument */
	if (string == NULL)
	{
		string = "(NULL)";
	}
	while (*string)
	{
		_putchar(*string);
		count++;
		string++;
	}
	return (count);
}
