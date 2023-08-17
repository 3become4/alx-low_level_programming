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
	char *s, *sep = "";

	va_list x;

	va_start(x, format);

	if (format)
	{
		while (format[i])
		{
			if (format[i] == 'c')
			{
				printf("%s%c", sep, va_arg(x, int));
				break;
			}
			else if (format[i] == 'i')
			{
				printf("%s%d", sep, va_arg(x, int));
				break;
			}
			else if (format[i] == 'f')
			{
				printf("%s%f", sep, va_arg(x, double));
				break;
			}
			else if (format[i] == 's')
			{
				s = va_arg(list, char *);
				if (!s)
					s = "(nil)";
				printf("%s%s", sep, s);
				break;
			}
			else
			{
				i++;
				continue;
			}
			sep = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(list);
}


