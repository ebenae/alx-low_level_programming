#include "main.h"

/**
* Write a function that checks for alphabetic character.
*Prototype: int _isalpha(int c);
* Returns 1 if c is a letter, lowercase or uppercase
* Returns 0 otherwise
 */

int _isalpha(int che)
{

	if (che >= 97 && che <= 122)
	{
		return (1);
	}
	else if (che >= 65 && che<= 90)
	{
		return (1);
	}
	return (0);
}