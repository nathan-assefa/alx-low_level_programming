#include "main.h"

/**
 * evaluate_num - to evaluate
 *
 * @num: parameter
 * @iterator: parameter
 * Return: int
 */
int evaluate_num(int num, int iterator)
{
if (iterator == num - 1)
return (1);

else if (num % iterator == 0)
return (0);

else if (num % iterator != 0)
return (evaluate_num(num, iterator + 1));

return (0);
}

/**
 * is_prime_number - finding prime number
 *
 * @n: argument
 * Return: int
 */
int is_prime_number(int n)
{
int i;

i = 2;

if (n < 2)
return (0);

else if (n == 2)
{
return (1);
}

return (evaluate_num(n, i));
}