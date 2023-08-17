#include "variadic_functions.h"

/**
* print_all -  prints strings, followed by a new line.
*
* @format: types of args
*
* Return: void
*/
void print_all(const char * const format, ...)
{
	int i = 0;
	char *st, *sep = "";

	va_list x;

	va_start(x, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(x, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(x, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(x, double));
					break;
				case 's':
					st = va_arg(x, char *);
					if (!st)
						st = "(nil)";
					printf("%s%s", sep, st);
					break;
				default:
					i++;
					continue;
			}
			sep = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(x);
}
