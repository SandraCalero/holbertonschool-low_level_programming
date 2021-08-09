#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: Pointer to a text file.
 * @letters: The number of letters it should read and print.
 *
 * Return: The actual number of letters it could read and print.
 * If the file can not be opened or read, return 0.
 * If filename is NULL return 0.
 * If write fails or does not write the expected amount of bytes, return 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, read_return, write_return;
	char *buff = malloc(sizeof(char) * letters);

	if (filename == NULL)
		return (0);
	if (buff == NULL)
	{
		free(buff);
		return (0);
	}
	/*Open file*/
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	/*Read file*/
	read_return = read(fd, buff, letters);
	if (read_return == -1)
		return (0);
	/*Print file*/
	write_return = write(1, buff, read_return);
	if (write_return == -1)
		return (0);
	/*Close file*/
	close(fd);
	free(buff);
	return (write_return);
}
