#include "main.h"

/**
**get_func - check the code
*@format: variable
*Return: Always 0.
*/
int (*get_func(const char *format))(va_list)
{
	int i;
	_structt arr[] ={
		{"c", print_char},
		{"s", print_str},
		{"%", print_pct},
		{NULL, NULL}};
	for (i = 0; arr[i].spef; i++)
	{
		if (*format == *(arr[i].spef))
		{
			return (arr[i].fun);
		}
	}
	return (NULL);
}
