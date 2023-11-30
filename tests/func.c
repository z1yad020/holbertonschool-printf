#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include "main.h"

/**
 * prntchar - print character
 * @ap: type for iterating arguments
 * @counter: count printed characters
 *
 * Return: void
 */
void prntchar(va_list ap, int *counter)
{
	char c = va_arg(ap, int);

	write(1, &c, 1);
	(*counter)++;
}

/**
 * prntstring - print string
 * @ap: type for iterating arguments
 * @counter: count printed characters
 *
 * Return: void
 */
void prntstring(va_list ap, int *counter)
{
	char *str = va_arg(ap, char*);

	if (!str)
	{
		prntnull();
		(*counter) += 6;
		return;
	}

	while (*str)
	{
		write(1, str++, 1);
		(*counter)++;
	}
}

/**
 * prntnull - print (null)
 *
 * Return: void
 */
void prntnull(void)
{
	char *str = "(null)";

	while (*str)
		write(1, str++, 1);
}
