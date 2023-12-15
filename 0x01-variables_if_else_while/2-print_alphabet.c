#include <stdio.h>
/**
 * main - a program that prints the alphabet in lowercase
 * Return: Always return 0 (success)
 */
int main(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
