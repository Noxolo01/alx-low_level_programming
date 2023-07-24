#include "main.h"

/**
 * char - _strcpy - a fuction that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * REturn: string
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int x = 0;

	while (*(src + i) != '\0')
	{
		l++;
	}
	for ( ; x < i ; x++)
	{
		dest[x] = src[x];
	}
	dest[i] = '\0';
	return (dest);
}
