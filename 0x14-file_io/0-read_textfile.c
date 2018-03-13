#include "holberton.h"
/**
 *read_textfile - reads a text file and prints it to the POSIX stdout
 *@filename: the file name of the file to be read
 *@letters: the number of letters to read and print
 *
 *Return: the number of letters read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int filedes;
	ssize_t bytesread;
	ssize_t byteswritten;
	ssize_t bytes = letters;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	filedes = open(filename, O_RDONLY);
	if (filedes == -1)
		return (0);

	bytesread = read(filedes, buf, letters);
	if (bytesread == -1 || bytesread > bytes)
		return (0);

	byteswritten = write(STDOUT_FILENO, buf, bytesread);

	if (byteswritten == -1 || byteswritten > bytes)
		return (0);
	if (byteswritten != bytesread)
		return (0);
	close(filedes);
	free(buf);
	return (byteswritten);
}
