#include <unistd.h>
#include <stdarg.h>

/**
 *_putchar - writes the character c to stdout
 *@c: The character to print
 *
 *Return: On success 1.
 *On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 *print_char - writes the character c to stdout
 *@args: va_list argument to retrieve a character to print
 *
 *Return: On success 1.
 *On error, -1 is returned, and errno is set appropriately.
 */
int print_char(va_list args)
{
	char c;

	c = (char) va_arg(args, int);
	_putchar(c);
	return (1);
}
