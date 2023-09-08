#include "main.h"

/**
 * c_file - Creates file.
 * @filen: A pointer to the name of file to create.
 * @t_content: A pointer to a string to write onto the file.
 *
 * Return: If the function fails - -1, otherwise - 1.
 */
int c_file(const char *filen, char *t_content)
{
int fd, w, len = 0;
if (filen == NULL)
return (-1);
if (t_content != NULL)
{
for (len = 0; t_content[len];)
len++;
}
fd = open(filen, O_CREAT | O_RDWR | O_TRUNC, 0600);
w = write(fd, t_content, len);
if (fd == -1 || w == -1)
return (-1);
close(fd);
return (1);
}

