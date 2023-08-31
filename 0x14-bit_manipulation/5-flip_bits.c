#include "main.h"
/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @nf: first number
 * @ms: second number
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int nf, unsigned long int ms)
{
int i, counts = 0;
unsigned long int curr;
unsigned long int exclus = nf ^ ms;
for (i = 63; i >= 0; i--)
{
curr = exclus >> i;
if (curr & 1)
counts++;
}
return (counts);
}

