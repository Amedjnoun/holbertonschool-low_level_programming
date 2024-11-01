#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: string to be capitalized
 *
 * Return: pointer to the resulting string str
 */

char *cap_string(char *str)
{
	int i;

	i = 0;
	if (str[i] >= 97 && str[i] <= 122)
		str[i] -= 32;
	i++;
	while (str[i] != '\0')
	{
		if ((str[i] >= 97 && str[i] <= 122) &&
		    (str[i - 1] == ' ' || str[i - 1] == '\t' ||
		     str[i - 1] == '\n' || str[i - 1] == ',' ||
		     str[i - 1] == ';' || str[i - 1] == '.' ||
		     str[i - 1] == '!' || str[i - 1] == '?' ||
		     str[i - 1] == '"' || str[i - 1] == '(' ||
		     str[i - 1] == ')' || str[i - 1] == '{' ||
		     str[i - 1] == '}'))
			str[i] -= 32;
		i++;
	}
	return (str);
}
