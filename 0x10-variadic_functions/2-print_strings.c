#include "variadic_functions.h"


/**
 * print_strings - prints strings with separator
 * @separator: the string separator
 * @n: the number of arguments
 * @...: the strings to print
 *
 * return: void 
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	int i = n;
	char *str;
	va_list ap;

	if (!n)
	{
		printf("\n";
		return;
	}
	va_srart(ap, n);
	while (i--)
	        printf("%s%s",(str = va_arg(ap, char *)) ? srt : "(nil)",
			i ? (separator ? separator : "") : "\n");
	va_end(ap);
}
