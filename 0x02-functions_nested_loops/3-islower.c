#include "main.h"
/**
 * _islower - prints for lowercase character
 * @c: single letter input
 * Return: 1 if int c is lowercase and otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
