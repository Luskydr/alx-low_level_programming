#include "main.h"

/**
 * leet - encode into 1337speak
 * @s: string to be encodedd 
 * Retun: encoded string
 */

char *leet(char *n)
{
	int i, j;
	char *a = "aAeEoOT1L";
	char *b = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == a[j])
			{
				s[i] = b[j];
			}
		}
	}
	return (s);
}
