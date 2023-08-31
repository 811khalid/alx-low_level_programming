#ifndef MAIN_H
#define MAIN_H
unsigned int binary_to_uint(const char *bn)
void print_binary(unsigned long int ntp)
int get_bit(unsigned long int nts, unsigned int indexbit)
int set_bit(unsigned long int *npc, unsigned int indexbit)
int clear_bit(unsigned long int *npc, unsigned int indexbit)
unsigned int flip_bits(unsigned long int nf, unsigned long int ms)
int _atoi(const char *s);
int _putchar(char c);
int get_endianness(void);
#endif

