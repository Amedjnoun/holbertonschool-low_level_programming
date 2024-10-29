#include "main.h"

/**
 * _isalpha - checks for alpha character
 * @c: character to be checked
 * Return: 1 if c is alpha, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
