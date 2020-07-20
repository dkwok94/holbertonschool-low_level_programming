#include "dhk.h"
/**
 *main - entry point
 *@ac: the number of command line arguments
 *@av: an array of command line argument strings
 *
 *Description: The function will copy the content from one file
 *to another
 *Return: 0 when successful, 1 otherwise
 */
int main(int ac, char *av[])
{
	int fileto, filefrom, closestatusto, closestatusfrom;
	ssize_t bytesread, byteswritten;
	char buf[1024];

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fileto = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	filefrom = open(av[1], O_RDONLY);
	if (fileto == -1 || filefrom == -1)
	{
		if (fileto == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
		if (filefrom == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			exit(98);
		}

	}
	while ((bytesread = read(filefrom, buf, 1024)) != 0)
	{
		if (bytesread == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			exit(98);
		}
		byteswritten = write(fileto, buf, bytesread);
		if (byteswritten == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	}
	closestatusto = close(fileto);
	closestatusfrom = close(filefrom);
	if (closestatusto == -1 || closestatusfrom == -1)
	{
		if (closestatusto == -1)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fileto);
		if (closestatusfrom == -1)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", filefrom);
		exit(100);
	}
	return (0);
}
