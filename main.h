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
char spef;
int (*fun)(va_list args);
} _structt;

/**
 * struct funtion_print - type structure
 *@indicator: is a flag tu indnicate teh funtion
 *@play: funtion pointer in array
 */
typedef struct funtion_print
{
int indicator;
int (*play)(va_list args);
} funtion_print;

int _putchar(char c);
int _printf(const char *format, ...);
funtion_print compare_specifier(char s);
int print_char(va_list args);
int print_str(va_list args);
int print_pct(va_list args);
void print_number(int n);
int count_number(int n);
int print_num(va_list args);
int print_int(va_list args);
#endif
