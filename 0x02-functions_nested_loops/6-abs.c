#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @abv: integer input
 * Return: Absolute value abv
 */

int _abs(int abv)
{
	return (abv * ((abv > 0) - (abv < 0)));
}
