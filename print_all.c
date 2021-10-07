#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * print_c - prints character
 * @args: character argument
 * Return: number of characters
 */
int print_c(va_list args)
{
	int c;

	c = va_arg(args, int);
	return (_putchar(c));
}
/**
 * print_s - prints a string
 * @args: string  argument
 * Return: number of characters
 */
int print_s(va_list args)
{
	return (printStr(va_arg(args, char *)));
}
/**
 * print_percent - pass the percent sing
 * @args: string  argument
 * Return: return the percent sing
 *
 */
int print_percent(va_list args)
{
	char *str;

	str = "%";
	if (va_arg(args, int) == *str)
	{
		return (*str);
	}
	return (*str);
}

/**
 * print_d - prints a decimal
 * @args: decimal argument
 * Return: counter
 */
int print_d(va_list args)
{
	return (print_num(va_arg(args, int)));
}

/**
 * print_i - prints an int
 * @args: arg list
 *
 * Return: number of printed character
 */
int print_i(va_list args)
{
	return (print_d(args));
}
