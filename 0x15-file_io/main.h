#ifndef MAIN_H
#define MAIN_H

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

ssize_t r_textf(const char *filen, size_t letters);
int c_file(const char *filen, char *t_cont);
int app_t_to_f(const char *filen, char *t_cont);

#endif

