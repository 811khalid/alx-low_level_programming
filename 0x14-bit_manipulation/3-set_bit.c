#include "main.h"
/**
 * set_bit - sets a bit at a given index to 1
 * @npc: pointer to the num to change
 * @indexbit: index of the bit to set to 1
 *
 * Return: 1 for success, -1 for fail
 */
int set_bit(unsigned long int *npc, unsigned int indexbit)
{
if (indexbit > 63)
return (-1);
*npc = ((1UL << indexbit) | *npc);
return (1);
}
