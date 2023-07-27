#include "main.h"
/**
 * leet - change vowels to numbers.
 * @s: analized string.
 *
 * Return: String with all vowels changed.
 */
char *leet(char *s)
{
	int i, j;
	char a[] = "aeotlAEOTL";
	char n[] = "4307143071";

	for (i  = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j <= 10; j++)
		{
			if (n[i] == s1[j])
			{
				n[i] = s2[j];
			}
		}
	}
	return (n);
}
