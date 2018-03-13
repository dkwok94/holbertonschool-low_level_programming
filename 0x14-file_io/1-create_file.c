#include "holberton.h"
/**
 *create_file - creates a file and writes text to it
 *@filename: the filename for the new file
 *@text_content: the text to write into the file
 *
 *Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int filedes;
	ssize_t byteswritten;
	int numletters = 0;
	int i = 0;

	if (filename == NULL)
		return (-1);

	while (*(text_content + i) != '\0')
	{
		numletters++;
		i++;
	}

	filedes = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (filedes == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(filedes);
		return (1);
	}
	else
	{
		byteswritten = write(filedes, text_content, numletters);
		if (byteswritten == -1)
			return (-1);
	}
	close(filedes);
	return (1);
}
