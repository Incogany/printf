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
int validator(cont char *format, va_list print1, MyPrint *ops1);
int op_binary(va_list form);
int op_octal(va_list form);
int op_unsigned_decimal(va_list form);
int op_hex(va_list form);
int op_HEX(va_list form);
int op_SString(va_list form);
int op_address(va_list form);
#endif
