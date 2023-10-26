#include "main.h"
/**
 * get_bit - returns the value of a bit at an index in a decimal
 * @nts: number to search
 * @indexbit: index of the bit
 * Return: value of the bit
 */
int get_bit(unsigned long int nts, unsigned int indexbit)
{
int bit_val;
if (indexbit > 63)
return (-1);
bit_val = (nts >> indexbit) & 1;
return (bit_val);
}
