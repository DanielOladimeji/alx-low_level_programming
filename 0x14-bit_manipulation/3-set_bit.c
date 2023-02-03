#include "main.h"

/**
 * set_bit - sets value of bit to 1 at index
 * @n: number
 * @index: index of bit
 *
 * Return: 1 if success, or -1 if fails
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num = 1;

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);

	num <<= index;/*shift the value in set left by 1 bit.*/
	/*num <<= index is the same as num = num << index*/

	*n = *n | num;/*bitwise OR operator*/
	return (1);
}
