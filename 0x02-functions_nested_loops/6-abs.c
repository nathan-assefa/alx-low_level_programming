#include "main.h"

/**
 * _abs: a function that computes the absolute value of an integer.
 *
 * @c: the int argument to the function
 * Return: c
 */
int _abs(int c)
{
	if (c < 0)
	{
		return (c * -1);
	}

	return (c);
}
