#include "main.h"

/**
 * append_t_to_f - Appends text at the end of a file.
 * @filen: A pointer to the name of the file.
 * @t_content: The string to add to the end of the file.
 * Return: If the function fails --1, if the file does not exist - -1.
 */
int append_t_to_f(const char *filen, char *t_content)
{
int op, wr, lens = 0;
if (filen == NULL)
return (-1);
if (t_content != NULL)
{
for (lens = 0; t_content[lens];)
lens++;
}
op = open(filen, O_WRONLY | O_APPEND);
wr = write(op, t_content, lens);
if (op == -1 || wr == -1)
return (-1);
close(op);
return (1);
}

