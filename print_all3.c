#include <stdarg.h>
#include "main.h"

/**
 * print_b - prints an binary
 * @num: arg list
 *
 * Return: number of printed character
 */
int print_b(va_list num)
{
	unsigned long n = va_arg(num, unsigned long);

	return (printStr(convert(n, 2)));
}
