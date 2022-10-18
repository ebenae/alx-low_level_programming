#include "main.h"
/**
 * a program that prints _putchar, followed by a new line.
 * program should return 0
 */
int main(void)
{
	char sen[] = "_putchar";

	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(sen[i]);
	}
	_putchar('\n');
	return (0);
}