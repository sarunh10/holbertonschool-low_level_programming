#include "main.h"
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
* read_textfile - Reads a text file and prints it to POSIX stdout.
* @filename: Name of the file to read.
* @letters: Number of letters to read and print.
*
* Return: Actual number of letters read and printed, or 0 on failure.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
ssize_t rd, wr;
char *buffer;
if (filename == NULL)
return (0);
buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)
return (0);
fd = open(filename, O_RDONLY);
if (fd == -1)
{
free(buffer);
return (0);
}
rd = read(fd, buffer, letters);
if (rd == -1)
{
free(buffer);
close(fd);
return (0);
}
wr = write(STDOUT_FILENO, buffer, rd);
if (wr == -1 || wr != rd)
{
free(buffer);
close(fd);
return (0);
}
free(buffer);
close(fd);
return (wr);
}
