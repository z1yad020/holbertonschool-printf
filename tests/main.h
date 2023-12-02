#ifndef __FILE_NAME__
#define __FILE_NAME__

int _printf(const char *, ...);

int prntdec(va_list, int *);
void prntchar(va_list, int *);
void prntstring(va_list, int *);
void prntnull(void);
int switcher(const char *, va_list, int *);
int _putchar(char);

#endif
