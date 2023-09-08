#ifndef MAIN_H
#define MAIN_H
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
ssize_t read_tfile(const char *filen, size_t letter);
int c_file(const char *filen, char *t_content);
int append_t_to_f(const char *filen, char *t_content);

#endif

