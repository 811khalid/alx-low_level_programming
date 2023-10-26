#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the char c to stdout
 * @ctp: character to print
 *
 * Return: on success 1
 * on error, -1 is returned, and set appropriately.
 */
int _putchar(char ctp)
{
return(write(1,&ctp, 1));
}
