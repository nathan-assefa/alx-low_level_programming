#include "main.h"

char transform_2(char x);

/**
 * rot13- Encrpting information
 * @src: parameter
 * Return: adress
 */
char *rot13(char *src)
{
int i = 0;

while (src[i] != '\0')
{
src[i] = transform_2(src[i]);
i++;
}
return (src);
}

char transform_2(char x)
{
char one[52] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K',
'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V',
'W', 'X', 'Y', 'Z', 'a', 'b', 'c', 'd', 'e', 'f', 'g',
'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r',
's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
char two[52] = {'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U',
'V', 'W', 'X', 'Y', 'Z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H',
'I', 'J', 'K', 'L', 'M', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u',
'v', 'w', 'x', 'y', 'z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h',
'i', 'j', 'k', 'l', 'm'};

int i = 0;
char replacment = x;

while (i < 52)
{
if (x == one[i])
{
replacment = two[i];
break;
}
i++;

}
return (replacment);
}