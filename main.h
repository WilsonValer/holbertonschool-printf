#ifndef HEADER_FILE
#define HEADER_FILE

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>

/**
 * struct _structt - type structure
 * @spef: pointer to the argument
 * @fun: pointer-function associated with the argument
 */
typedef struct _structt
{
	char *spef;
	int (*fun)(va_list);
}_structt;

int _putchar(char c);
int _printf(const char *format, ...);
int (*get_func(const char *format))(va_list);
int print_char(va_list args);
int print_str(va_list args);
int print_pct(va_list args);
#endif
