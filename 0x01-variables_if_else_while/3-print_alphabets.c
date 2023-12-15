#include<stdio.h>
/**
 * main - a program that prints the alphabet in lowercase,and in uppercase
 * Return: Always return 0 (success)
 **/
int main(void)
{
	int n, m;

	for (n = 'a'; n <= 'z'; n++)
	{
		putchar(n);
	}
	for (m = 'A'; m <= 'Z'; m++)
	{
		putchar(m);
	}
	putchar('\n');
	return (0);
}
