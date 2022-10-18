#include "main.h"

/**
 * a function that prints the last digit of a number.
 */

int print_last_digit(int nu)
{
int ai;
if (nu < 0)
nu = -nu;
ai = nu % 10;
if (ai < 0)
ai = -ai;
_putchar(ai + '0');
return (ai);
}