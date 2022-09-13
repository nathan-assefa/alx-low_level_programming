#include "main.h"

/**
 * int _islower: only runs when the
 * charchter is lowercase
 *
 * @c: charchter
 *
 * return: always 0
 */
int _islower(int c)
{
	if (c >= 97)
		return (1);

	return (0);
}
