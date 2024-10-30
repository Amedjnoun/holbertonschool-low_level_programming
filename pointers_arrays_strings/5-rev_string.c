#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */

void rev_string(char *s)
{
	int end, start;
	char temp;

	i = 0;
	while (s[end] != '\0')
		{end++;
		}
	end--;
	start = 0;
	while (start < end)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;
		end--;
		start++;
	}
}
