#include <stdlib.h>
#include <stdarg.h>
#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string
 */
void rev_string(char *s)
{
	int i = 0, len = 0;
	char temp;

	while (s[i] != '\0')
	{
		len++;
		i++;
	}

	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = temp;
	}
}

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @s: string
 * Return: uppercase string
*/
char *string_toupper(char *s)
{
	char *t = s;

	while (*s != '\0')
	{
		if (*s >= 'a' && *s <= 'z')
			*s -= 'a' - 'A';
		s++;
	}
	return (t);
}

/**
 * printStr - prints a string
 * @str: string to print
 *
 * Return: number of printed character
 */
int printStr(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}
