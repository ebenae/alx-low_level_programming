#include "main.h"
#include <stdio.h>

/**
 * ma program that prints the numbers from 1 to 100, followed by a new line. But for multiples of three print Fizz instead of the number and for the multiples of five print Buzz. For numbers which are multiples of both three and five print FizzBuzz.
* Each number or word should be separated by a space
* You are allowed to use the standard library
 */
int main(void)
{
	int x = 1;

	while (x < 101)
	{
		if ((x % 3 == 0) && (x % 5 == 0))
		{
			printf("%s", "FizzBuzz" + " ");
		}
		else if (x % 3 == 0)
		{
			printf("%s", "Fizz" + " ");
		}
		else if (x % 5 == 0)
		{
			printf("%s", "Buzz" + " ");
		}
		else
		{
			printf("%d", x + " ");
		}

		
		x++;
	}
	printf("\n");
	 
}