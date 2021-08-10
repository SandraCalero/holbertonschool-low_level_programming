#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: The name of the file to create.
 * @text_content: The NULL terminated string to add at the end of the file.
 *
 * Return: 1 on success, -1 on failure.
 * If filename is NULL return -1.
 * If text_content is NULL do not add anything to the file. Return 1 if the
 * file exists and -1 if the file does not exist or if you do not have the
 * required permissions to write the file.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, write_return, len;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_APPEND, 0664);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	for (len = 0 ; text_content[len] != '\0' ; len++)
		;
	write_return = write(fd, text_content, len);
	if (write_return == -1)
		return (-1);
	close(fd);
	return (1);
}
