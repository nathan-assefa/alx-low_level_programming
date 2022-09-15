#include "main.h"

/**
 * _isdigit- a function that checks for a digit (0 through 9).
 *
 * @c: an argmument
 * Return: 1 when digit
 * Return: 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
