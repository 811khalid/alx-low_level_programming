#include "main.h"
/**
 * clear_bit - sets the value of a given bit to 0
 * @npc: pointer to the num to change
 * @indexbit: index of the bit to clear
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *npc, unsigned int indexbit)
{
if (indexbit > 63)
return (-1);
*npc = (~(1UL << indexbit) & *npc);
return (1);
}
