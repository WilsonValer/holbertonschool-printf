#include "main.h"

/**
*print_char - print the character
*@args: variable
*Return: Always 0.
*/
int print_char(va_list args)
{
_putchar(va_arg(args, int));

return (0);
}
/**
*print_str - print the string
*@args: variable
*Return: Always 0.
*/
int print_str(va_list args)
{
int j;
char *str = va_arg(args, char *);

if (str == NULL)
str = "(null)";
for (j = 0; str[j]; j++)
_putchar(str[j]);
return (j);
}
/**
*print_pct - print the percentage
*@args: variable of arguments
*Return: always return
*/
int print_pct(va_list args)
{
(void)args;
_putchar('%');
return (0);
}

/**
 * print_num - Print a num;
 *
 * @args: va_list like argument
 *
 * Return: The length of the num.
 */


int print_num(va_list args)
{
	int num = va_arg(args, int);
	int counter = 0;

	counter = count_number(num);
	print_number(num);
	return (counter);
}

/**
 * print_int - Print a int
 *
 * @args: va_list like argument
 *
 * Return: The length of int
 */

int print_int(va_list args)
{
	int num = va_arg(args, int);
	int counter = 0;

	counter = count_number(num);
	print_number(num);
	return (counter);
}
