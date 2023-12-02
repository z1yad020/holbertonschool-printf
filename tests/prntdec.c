#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include "main.h"


/**
 * _pow - Manual pow function
 * @x: base
 * @y: power
 *
 * Return: result
 */
double _pow(double x, double y)
{
	long double result = 1.0;

	while (y)
	{
		result *= x;
		--y;
	}
	return (result);
}

/**
 * prntdec - print decimal or int
 * @ap: type for iterating arguments
 * @counter: count printed characters
 *
 * Return: void
 */
void prntdec(va_list ap, int *counter)
{
	int index = 0, i = 9, nm = 0;
	long int dg = va_arg(ap, long int);
	unsigned long int udg, dec;
	char *str = malloc(11);

	if (!str)
		return;

	if (dg < 0)
	{
		udg = (unsigned long int)dg * -1;
		*str = '-';
		index = 1;
	}
	else
		udg = dg;

	for (; i >= 0; i--)
	{
		dec = (unsigned long int)(_pow(10, i));
		nm = udg / dec % 10;
		if (!nm)
			continue;
		*(str + index++) = nm + '0';
	}
	*(str + index) = '\0';

	i = 0;
	while (*(str + i))
	{
		write(1, str + i++, 1);
		(*counter)++;
	}
	free(str);
}
