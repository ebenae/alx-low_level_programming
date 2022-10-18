#include "main.h"

/**
 *a function that prints the sign of a number.
 *Prototype: int print_sign(int n);
*Returns 1 and prints + if n is greater than zero
*Returns 0 and prints 0 if n is zero
*Returns -1 and prints - if n is less than zero
 */

int print_sign(int si)
{
	if (si > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (si == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (si < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}