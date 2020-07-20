#include "dhk.h"
/**
 *append_text_to_file - appends a text at the end of a file
 *@filename: name of the file
 *@text_content: text to append to the file
 *
 *Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int filedes;
	int numletters = 0;
	int i = 0;
	ssize_t byteswritten;

	if (filename == NULL)
		return (-1);

	filedes = open(filename, O_WRONLY | O_APPEND);
	if (filedes == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(filedes);
		return (1);
	}

	while (*(text_content + i) != '\0')
	{
		numletters++;
		i++;
	}

	byteswritten = write(filedes, text_content, numletters);
	if (byteswritten == -1)
		return (-1);
	close(filedes);
	return (1);
}
