#include "main.h"

/**
 * get_endianness - This will checksif a machine is little or big endian
 * Return: return 0 for someting big and 1 for something little
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
