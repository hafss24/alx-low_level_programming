#include "variadic_functions.h"


/**
 * print_numbers - prints numbers with separator
 * @separator: the string separator
 * @n: the number og arguments
 * @...: the integers to print
 *
 * return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i = n;
	va_list ap;

	if(!n)
	{
		printf("\n");
		return;
	}
	va_srart(ap, n);
	while (i--)
		printf("%d%s", va_arg(ap, int),
				i ? (separator ? sepaerator : "") : "\n");
	va_end(ap);
}
