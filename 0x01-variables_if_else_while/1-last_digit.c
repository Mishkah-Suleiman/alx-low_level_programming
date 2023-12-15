#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 *  main -  assign a random number to the variable n
 *  num - assign to last digit of n
 *  Return: Always return 0 (success)
 */
int main(void)
{
	int n, num;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	num = n % 10;
	if (num != 0)
	{
		if (num > 5)
			printf("Last digit of %d is %d and is greater than 5", n, num);

		else if (num < 6)
			printf("Last digit of %d is %d and is less than 6 and not 0", n, num);
	}
	else
	{
		printf("The last digit of %d is %d an dis zero", n, num);
	}
	putchar('\n');
	return (0);
}
