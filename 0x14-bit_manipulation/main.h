#ifndef MAIN_H
#define MAIN_H

/**
 * binary_to_uint - Convert a binary number to an unsigned int.
 * @bn: Pointer to a string representing a binary number.
 * Return: The converted unsigned int value.
 */
unsigned int binary_to_uint(const char *bn);
/**
 * print_binary - Print the binary representation of a number.
 * @ntp: The number to be printed in binary format.
 */
void print_binary(unsigned long int ntp);
/**
 * get_bit - Get the value of a bit at a given index.
 * @nts: The number from which to retrieve the bit.
 * @indexbit: The index of the bit to retrieve.
 * Return: The value of the bit at the given index.
 */
int get_bit(unsigned long int nts, unsigned int indexbit);
/**
 * set_bit - Set a bit at a given index to 1.
 * @npc: Pointer to the number to modify.
 * @indexbit: The index of the bit to set.
 * Return: 1 if successful, or -1 if an error occurred.
 */
int set_bit(unsigned long int *npc, unsigned int indexbit);
/**
 * clear_bit - Set a bit at a given index to 0.
 * @npc: Pointer to the number to modify.
 * @indexbit: The index of the bit to clear.
 * Return: 1 if successful, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *npc, unsigned int indexbit);
/**
 * flip_bits - Flip (invert) all the bits within a given range.
 * @nf: The number to flip the bits in.
 * @ms: The number of bits to flip.
 * Return: The resulting number after flipping the bits.
 */
unsigned int flip_bits(unsigned long int nf, unsigned long int ms);
/**
 * _atoi - Convert a string to an integer.
 * @s: Pointer to the string to convert.
 * Return: The converted integer value.
 */
int _atoi(const char *s);
/**
 * _putchar - Write a character to the standard output.
 * @c: The character to write.
 *
 * Return: On success, return c, returns -1.
 */
int _putchar(char c);

/**
 * get_endianness - Check the endianness of the system.
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void);
#endif

