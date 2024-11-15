#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.
 * @str: string to copy.
 *
 * Return: NULL if str = NULL, a pointer to the duplicated string, or NULL if it fails.
 */

char *_strdup(char *str);
{
	char *str;
	unsigned int i, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	str = malloc(sizeof(char) * (len + 1));

	if (str == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		str[i] = str[i];

	return (str);
}
