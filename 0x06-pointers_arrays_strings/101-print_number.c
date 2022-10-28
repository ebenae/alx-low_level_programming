#include "holberton.h"

/**
* Write a function that prints an integer.
*Prototype: void print_number(int n);
*You can only use _putchar function to print
*You are not allowed to use long
*You are not allowed to use arrays or pointers
*You are not allowed to hard-code special values
 */

void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}

	if ((num / 10) > 0)
		print_number(num / 10);

	_putchar((num % 10) + '0');
}