#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

/**
 * struct spec_func - struct function to hold char and a function pointer
 * @spec: format specifier character for the paired function
 * @func: function pointer to handle specifier
 */
typedef struct spec_func
{
	char spec;
	int (*func)(va_list);
} spec_t;
int _putchar(char c);
int print_char(va_list args);
int print_number(va_list args);
int print_binary(va_list args);
int print_unsigned_num(va_list args);
int print_octal(va_list args);
int printf_HEX(va_list val);
int _puts(va_list str);
int _printf(const char *format, ...);
int printf_hex(va_list val)
#endif /* MAIN_H */
