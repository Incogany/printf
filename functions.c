#include <stdio.h>
#include "main.h"
#include <stdarg.h>
#include <unistd.h>
/**
 * _putchar - prihhj
 * @c: chagfuyh
 * Return: jchjfjhfh
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 *op_string - string
 *@form: name djdj
 *Return: nothing
 */
int op_string(va_list form)
{
	int lenghts;
	char *str = va_arg(form, char *);

	if (str == NULL)
	{
		str = "(null)";
	}
	lenghts = 0;
	while (str[lengts])
	{
		lengts += _putchar(str[lengts]);
	}
	return (lenghts);
}

/**
 *op_reverse - string
 *@form: name djdj
 *Return: nothing
 */
int op_reverse(va_list form)
{
	int i = 0, lenghtr = 0;
	char *str = va_arg(form, char *);

	while (str[i] != '\0')
	{
		i++;
	}
	lenghtr = i;
	i--;
	while (i >= 0)
	{
		_putchar(str[i]);
		i--;
	}
	return (lenghtr);
}

/**
 * op_character - print jhg
 * @form: name
 * Return: void
 */
void op_character(va_list form)
{
	int lenghtc = 0;

	lenghtc = _putchar(va_arg(form, int));
	return (lenghtc);
}

/**
 * op_integer - print jhg
 * @form: name
 * Return: void
 */
void op_integer(va_list form)
{
	int integer = va_arg(form, int);
	int div = 1;
	int lenghti = 0;
	unsigned int number;

	if (integer < 0)
	{
		lenghti += _putchar('-');
		number = integer * -1;
	}
	else
		number = integer;
	while (number / div > 9)
		div *= 10;
	while (div != 0)
	{
		lenghti += _putchar('0' + number / div);
		number %= div;
		div /= 10;
	}
	return (lenghti);
}
