
/**
 * convert - convert int to base 2, 8 or 16
 * @num: number to be converted
 * @base: base
 * Return: converted string
 */
char *convert(unsigned long num, int base)
{
	static const char Repr[] = "0123456789abcdef";
	static char buffer[50];
	char *ptr;

	ptr = &buffer[49];
	*ptr = '\0';

	do {
		*--ptr = Repr[num % base];
		num /= base;
	} while (num != 0);

	return (ptr);
}
