#include <stdio.h>
#include <stdarg.h>
#include "main.h"
/**
 * op_hex - prints
 * @form: number of list
 * Return: int
 */
int op_hex(va_list form)
{
	int count = o, i = 0;
	unsigned int num = va_arg(form, unsigned int);
	int hex[sizeof(int) * 8 + 1];

	while (num >= 16)
	{
		hex[i] = num % 16;
		num /= 16;
		i++;
	}
	hex[i] = num;
	while (i >= 0)
	{
		if ((hex[i] <= 9) && (hex[i] >= 0))
			_putchar(hex[i] + '0');
		else
			_putchar(hex[i] + 87);
		count++, i--;
	}
	return (count);
}
/**
 * op_HEX - prints
 * @form: number of list
 * Return: int
 */
int op_HEX(va_list form)
{
	int count = o, i = 0;
	unsigned int num = va_arg(form, unsigned int);
	int hex[sizeof(int) * 8 + 1];

	while (num >= 16)
	{
		hex[i] = num % 16;
		num /= 16;
		i++;
	}
	hex[i] = num;
	while (i >= 0)
	{
		if ((hex[i] <= 9) && (hex[i] >= 0))
			_putchar(hex[i] + '0');
		else
			_putchar(hex[i] + 87);
		count++, i--;
	}
	return (count);
}
