#include "main.h"

/**
 * a function that prints 10 times the alphabet, in lowercase, followed by a new line
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
	char alphabet = 'a';
    int count = 0;

   while (count < 10) 
   {
	while (alphabet <= 'z')
	{
		_putchar (alphabet);
		alphabet++;
	}
   
	_putchar ('\n');
    count++
   } 
}