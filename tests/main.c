#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
<<<<<<< HEAD
  /*int len;
    int len2;
    unsigned int ui;
=======
	int len = _printf("%");
	int len2 = printf("%");
    /*   unsigned int ui;
>>>>>>> c69c9984fbe3402b4cb07dd5f00ec816954068e4
    void *addr;*/

	/*_printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', " 99", " Please wait", '\n');
	printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', " 99", " Please wait", '\n');

	_printf("%K\n");
	printf("%K\n");

	_printf("%!\n");
	printf("%!\n");

	_printf("%");
	printf("%");

	_printf("Complete the sentence: You %s nothing, Jon Snow.\n", "know");
	printf("Complete the sentence: You %s nothing, Jon Snow.\n", "know");

	_printf("css%ccs%scscscs\n", 'T', "Test");
	printf("css%ccs%scscscs\n", 'T', "Test");

	_printf(NULL);
	printf(NULL);*/

	/*_printf("%d", '\0');*/
	/*printf("%d\n%d", len, len2);*/

<<<<<<< HEAD
	_printf("%c", '\0');
	printf("%c", '\0');*/
=======
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
	return (0);
>>>>>>> c69c9984fbe3402b4cb07dd5f00ec816954068e4


/*_printf("%%\n");
	_printf("Should print a single percent sign: %%\n");
	_printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', " 99", " Please wait", '\n');
	_printf("css%ccs%scscscs\n", 'T', "Test");*/



    
    /*len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
	  addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);*/
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
	_printf("%d - %d = %d\n", 1024, 2048, -1024);
	printf("%d - %d = %d\n", 1024, 2048, -1024);
	_printf("%d\n", INT_MAX);
	_printf("%d\n", INT_MIN);
    /*_printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");
    */
    return (0);
}
