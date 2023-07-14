#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 
 */ 
int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwyxz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
