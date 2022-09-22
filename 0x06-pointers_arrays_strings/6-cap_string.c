#include "main.h"

/**
 * *cap_string - capitalize all words of a string
 * @s: the string to capitalize
 *
 * Description: Separators of words: "space, tabulation,
 * new line , ; . ! ? \" ( ){ }"
 *
 * Return: pointer to the capitalized string
 */
char *cap_string(char *s)
{
	char *ws = " \t\n,:.!?\"(){}";
	int x;
	int y;

	for (x = 0, y = 0; s[x]; ++x)
	{
		if ('a' <= s[x] && s[x] <= 'z')
		{
			if (x)
			{
				for (y = 0; ws[y] && ws[y] != s[x - 1]; ++y)
					;
			}
			if (ws[y])
				s[x] -= ('a' - 'A');
		}
	}
	return (s);
}


