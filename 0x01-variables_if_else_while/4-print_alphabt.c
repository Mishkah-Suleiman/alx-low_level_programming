#include <stdio.h>
/**
 * main - program prints the alphabet in lowercase without e and q
 * Return: Always return 0 (success)
 **/
int main(void)
{
	int n;

	for (n  = 'a'; n <= 'z'; n++)
	{
		if (n != 'e' && n != 'q')
			putchar(n);
	}
	putchar('\n');
	return (0);
}
