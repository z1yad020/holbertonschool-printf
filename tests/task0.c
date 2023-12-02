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

<<<<<<< HEAD
		/*		switcher(format, ap, &counter); */
=======
		/*switcher(format, ap, &counter);*/
>>>>>>> c69c9984fbe3402b4cb07dd5f00ec816954068e4
		switch (*(++format))
		{
		case 'c':
			prntchar(ap, &counter);
			break;
		case 's':
			prntstring(ap, &counter);
			break;
		case '%':
			write(1, format, 1);
			counter++;
			break;
		case '\0':
			return (-1);
		case 'd':
		  prntdec(ap, &counter);
		  break;
		default:
			write(1, format - 1, 1);
			write(1, format, 1);
			counter += 2;
			break;
		}
		format++;
	}
	va_end(ap);

	return (counter);
}
