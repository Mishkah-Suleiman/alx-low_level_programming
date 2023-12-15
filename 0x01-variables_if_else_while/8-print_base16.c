#include <stdio.h>
/**
 * main - a program that prints all the numbers of base 16 in lowercase
 * Return: Always return 0 (success)
 **/
int main(void)
{
	int n, m;

	for (n = '0'; n <= '9'; n++)
		putchar(n);
	for (m = 'a'; m <= 'f'; m++)
		putchar(m);
	putchar('\n');
	return (0);
}
