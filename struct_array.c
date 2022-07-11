#include "main.h"

/**
*compare_specifier - check the code
*@s: variable
*Return: Always 0.
*/
funtion_print compare_specifier(char s)
{
int i = 0;

funtion_print p = {0, NULL};

_structt arr[] = {
{'c', print_char},
{'d', print_num},
{'i', print_int},
{'s', print_str},
{'%', print_pct},
{'\0', NULL}};
while (arr[i].spef)
{
if (arr[i].spef == s)
{
p.indicator = 1;
p.play = arr[i].fun;
return (p);
}
i++;
}
return (p);
}
