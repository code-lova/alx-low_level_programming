#include "function_pointers"

/**
 * print_name - function print a name
 * @name: input name
 * @f: function pointers.
 *
 * return: no return
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
