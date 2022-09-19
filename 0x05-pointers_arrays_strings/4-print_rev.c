#include "main.h"
#include <string.h>

/**
 * print_rev- Reversing order
 *
 * @s: pointer
 */
void print_rev(char *s)
{
<<<<<<< HEAD
    char tmp;
    int i, len1, len2;

    while (s[len1] != '\0')
    {
            len1++;
    }

    len2 = len1 - 1;
    for (i = 0; i < len1 / 2; i++)
    {
        tmp = s[1];
        s[i] = s[len2];
        s[len2] = tmp;
        len2 -= 1;
    }
}
=======
	int i, j;

	j = strlen(s);
	for (i = j - 1; i > 0 - 1; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
>>>>>>> b79cb982ddce4c0c749a443edefb87dfa9728967
