#include "main.h"

/**
 * clear_bit - sets bit to 0 at a given index
 * @n: number
 * @index: index of bit to be set
 *
 * Return: 1 if success, or -1 if fails
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num = 1;

	if (index > (sizeof(unsigned long int) * 8))

		return (-1);

	num = ~(num << index);/*bitwise Not operator is an unary operator*/
	/*which is why we use the () to nest our left shift operator*/

	*n = *n & num;/*bitwise AND operator*/



	return (1);

}
