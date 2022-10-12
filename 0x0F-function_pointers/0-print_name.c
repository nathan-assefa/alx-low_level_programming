#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - calling function name
 *
 * @name: The parameter of a function to be called
 * @f: function pointer
 */
void print_name(char *name, void (*f)(char *))
{
    if (name && f)
    f(name);
}