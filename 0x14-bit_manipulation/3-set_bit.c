#include "main.h"

/**
 * set_bit -This will set a bit at a given index to 1
 * @n: points to the number to be changed
 * @index: The index of the bit is to be set to 1
 *
 * Return: 1 is for success, -1 is for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
