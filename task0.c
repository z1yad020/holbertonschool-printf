#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include "main.h"
/**
 * _printf - print somthing in string
 * @format: string
 *
 * Return: lengh of printed string
 */
int _printf(const char *format, ...)
{
	int counter = 0;
	va_list ap;

	if (!format)
		return (-1);

	va_start(ap, format);
	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			format++;
			counter++;
			continue;
		}
		switcher(&format, ap, &counter);
	}
	va_end(ap);
	return (counter);
}
