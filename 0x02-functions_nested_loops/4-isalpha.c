#include "main.h"
/**
 * _isalpha - function for alphabetic character
 * @c: single letter input
 * Return: 1 if c is upper or lowercase
 */
int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
		return (1);
	else
		return (0);
}
