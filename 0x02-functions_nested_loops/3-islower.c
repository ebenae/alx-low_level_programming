#include "main.h"

/**
* a function that checks for lowercase character.
* Prototype: int _islower(int c);
* Returns 1 if c is lowercase
* Returns 0 otherwise
*/

int _islower(int checki)
{

	if (checki >= 97 && checki <= 122)
		return (1);
	else
		return (0);
}