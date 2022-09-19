#include "main.h"

/**
 * _puts- printing strings
 *
 * @str: a pointer
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
