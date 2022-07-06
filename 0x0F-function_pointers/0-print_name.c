/**
 * print_name - function that prints name using another function
 * @name: name to be printed
 * @f: variable that pointes to the function that prints the name
 */

#include "function_pointers.h"
#include <stdlib.h>

void print_name(char *name, void (*f)(char *))
{
	f(name);
}

