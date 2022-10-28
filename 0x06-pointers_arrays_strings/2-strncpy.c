#include "main.h"

/**
 * Write a function that copies a string.
* Prototype: char *_strncpy(char *dest, char *src, int n);
* Your function should work exactly like strncpy
 */

char *_strcpy(char *dest, char *src)
{
	int i, length;

	for (length = 0; src[length] != '\0'; length++)
	{
	}

	for (i = 0; i <= length ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}