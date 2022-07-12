#ifndef PRINT_H
#define PRINT_H

#include <stdarg.h>

int _printf(const chsr *format, ...);
/**
 * struct format - fsgha
 * @op: format
 * @f: function
 */
typedef struct format
{
	char *op;
	int (*f)(va_list print);
} MyPrint;

int putchar(char c);
int op_character(va_list form);
int op_string(va_list form);
int op_integer(va_list form);
int op_reverse(va_list form);
int op_rot13(va_list form);

#endif
