#include "main.h"

/**
 * print_u - prints an unsigned int
 * @num: arg list
 *
 * Return: number of printed character
 */
int print_u(va_list num)
{
	unsigned int n = va_arg(num, int);

	return (print_num(n));
}

/**
 * print_Hex - prints a uppercased hexadecimal
 * @h: arglist
 *
 * Return: number of printed character
 */
int print_Hex(va_list h)
{
	unsigned long num = va_arg(h, unsigned int);

	return (printStr(string_toupper(decToHexa(num))));
}

/**
 * print_hex - prints a lowercased hexadecimal
 * @h: arglist
 *
 * Return: number of printed character
 */
int print_hex(va_list h)
{
	unsigned long num = va_arg(h, unsigned int);

	return (printStr(convert(num, 16)));
}

/**
 * print_oct - prints a ocatal
 * @o: arglist
 *
 * Return: number of printed character
 */
int print_oct(va_list o)
{
	unsigned long num = va_arg(o, unsigned int);

	return (printStr(convert(num, 8)));
}

/**
 * print_pointer - prints a ocatal
 * @p: arglist
 *
 * Return: number of printed character
 */
int print_pointer(va_list p)
{
	unsigned long num = va_arg(p, unsigned long);

	_putchar('0');
	_putchar('x');
	return (2 + printStr(convert(num, 16)));
}
