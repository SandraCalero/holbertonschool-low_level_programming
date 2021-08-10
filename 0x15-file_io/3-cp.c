#include "main.h"
/**
 * main - copies the content of a file to another file.
 * @argc: count of the arguments supplied to the program
 * @argv: array of pointers to the strings.
 *
 * Return:  0 success.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, close_return_from, close_return_to;
	int read_return, write_return;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97); }
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98); }
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99); }
	while ((read_return = read(file_from, buff, 1024)) > 0)
	{
		if (read_return == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98); }
		write_return = write(file_to, buff, read_return);
		if (write_return == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99); }
	}
	close_return_from = close(file_from);
	if (close_return_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100); }
	close_return_to = close(file_to);
	if (close_return_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100); }
	return (0); }
