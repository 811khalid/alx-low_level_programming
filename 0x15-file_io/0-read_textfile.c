#include "main.h"
#include <stdlib.h>

/**
 * r_textf- Read text file to STDOUT.
 * @filen: text file being read
 * @lttr: number of letters that are to be read
 * Return: w- actual num of bytes read and printed 0 when func fails or filen is NULL.
 */
ssize_t r_textf(const char *filen, size_t lttr)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filen, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * lttr);
	t = read(fd, buf, lttr);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}

