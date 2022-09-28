#include "main.h"

/**
 * factorial - to find factorial of any number
 * @n: paramter
 *
 * Return: Always the result of factorial.
 */
int factorial(int n)
{
    if (n == 0)
     {
             return 1;
     }
     else if ( n < 0)
     {
        return -1;
     }
     return (n * factorial(n - 1));
}