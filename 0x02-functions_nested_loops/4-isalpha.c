#include "main.h"

/**
 * _isalpha- a function that checks for alphabetic character
 *
 * c: an integer argument
 * Return: 0
 */
int _isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
