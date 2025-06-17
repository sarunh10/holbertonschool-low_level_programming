#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

void check_args(int argc);
int open_file_from(const char *filename);
int open_file_to(const char *filename);
void copy_file(int from_fd, int to_fd, const char *from, const char *to);
void close_file(int fd);
/**
* main - copies content from one file to another
* @argc: argument count
* @argv: argument vector
*
* Return: 0 on success, exits with error codes on failure
*/
int main(int argc, char *argv[])
{
int file_from, file_to;
check_args(argc);
file_from = open_file_from(argv[1]);
file_to = open_file_to(argv[2]);
copy_file(file_from, file_to, argv[1], argv[2]);
close_file(file_from);
close_file(file_to);
return (0);
}
/**
* check_args - checks if the correct number of args was given
* @argc: argument count
*/
void check_args(int argc)
{
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
}
/**
* open_file_from - opens the source file
* @filename: name of the file
*
* Return: file descriptor
*/
int open_file_from(const char *filename)
{
int fd = open(filename, O_RDONLY);
if (fd == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
exit(98);
}
return (fd);
}
/**
* open_file_to - opens or creates the destination file
* @filename: name of the file
*
* Return: file descriptor
*/
int open_file_to(const char *filename)
{
int fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (fd == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
exit(99);
}
return (fd);
}
/**
* copy_file - copies content from one file to another
* @from_fd: source file descriptor
* @to_fd: destination file descriptor
* @from: source filename (for error messages)
* @to: destination filename (for error messages)
*/
void copy_file(int from_fd, int to_fd, const char *from, const char *to)
{
char buffer[BUFFER_SIZE];
ssize_t bytes_read, bytes_written;
while ((bytes_read = read(from_fd, buffer, BUFFER_SIZE)) > 0)
{
bytes_written = write(to_fd, buffer, bytes_read);
if (bytes_written == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", to);
exit(99);
}
}
if (bytes_read == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", from);
exit(98);
}
}
/**
* close_file - closes a file descriptor
* @fd: file descriptor
*/
void close_file(int fd)
{
if (close(fd) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
exit(100);
}
}
