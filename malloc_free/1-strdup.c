#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 *  * @str: string to copy.
 * Return: NULL if str = NULL, a
 *
 */

char *_strdup(char *str)
{

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
