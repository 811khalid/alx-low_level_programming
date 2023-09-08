#include "main.h"
#include <stdlib.h>
/**
 * read_tfile- Read text file print to STDOUT.
 * @filen: text file being read
 * @letter: number of letters to be read
 * Return: w- actual number of bytes read and printed
 */
ssize_t read_tfile(const char *filen, size_t letter)
{
char *buf;
ssize_t fd;
ssize_t w;
ssize_t t;
fd = open(filen, O_RDONLY);
if (fd == -1)
return (0);
buf = malloc(sizeof(char) * letter);
t = read(fd, buf, letter);
w = write(STDOUT_FILENO, buf, t);
free(buf);
close(fd);
return (w);
}

