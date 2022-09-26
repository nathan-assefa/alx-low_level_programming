#include "main.h"

/**
 * _memset - wrting n bytes in the memory
 *
 * @s: parameter
 * @b: parameter
 * @n: parameter
 *
<<<<<<< HEAD
 * Return: pointer to the memory bolck
=======
 * Return: always a charachter
>>>>>>> 0fa9857011f2f82f7ff58dbd9bc00dc26ff40620
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
