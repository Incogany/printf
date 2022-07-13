#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * vaidator - function
 * @format: pointer
 * @print1: hghjg
 * @ops1: ghss
 * Return: ghghsdhgdh
 */
int validator(const char *format, va_list print1, MyPrint *ops1)
{
	int i = 0, j = 0, count = 0, number = 13;

	while (format && format[i])
	{
		if (format[i] == '%' && format [i + 1] != '%')
		{
			if (format[i + 1] == '\0')
				return (-1);
			if (format[i + 1] == ' ')
			{
				while (format[i + 1] == ' ')
					i++;
			}
			while (j < number)
			{
				if (ops1[j].op[0] == format[i + 1])
				{
					count += ops1[j].f(print1);
					i++;
					break;
				} j++;
			}
			if (i == number)
				count += _putchar('%');
		}
		else if (format[i] == '%' && format[i + 1] == '%')
		{
			count += _putchar('%');
			i++;
		}
		else
			count += _putchar('%');
		i++, j = 0;
	}
	return (count);
}
