#ifndef MAIN_H
#define MAIN_H

/*Header files*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/*Functions prototypes*/

ssize_t read_textfile(const char *filename, size_t letters);

#endif
