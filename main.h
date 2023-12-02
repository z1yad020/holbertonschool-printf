#ifndef __FILE_NAME__
#define __FILE_NAME__

ssize_t write(int, const void *, size_t);
int _printf(const char *format, ...);

int prntdec(va_list args, int *);
void prntchar(va_list, int *);
void prntstring(va_list, int *);
void prntnull(void);
int switcher(const char *, va_list, int *);

#endif
