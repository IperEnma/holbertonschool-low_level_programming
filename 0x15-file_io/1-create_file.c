#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_file - creates a file
 * @filename: file name
 * @text_content: content tex
 * Return: -1 or 1
 */
int create_file(const char *filename, char *text_content)
{
	int fd = 0, n = 0, check = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR, S_IWUSR);

	if (fd < 0)
	{
		write(STDOUT_FILENO, "fail\n", 5);
		return (-1);
	}

	n = strlen(text_content);
	check = write(fd, text_content, n);

	if (check == -1)
	{
		write(STDOUT_FILENO, "fail", 4);
		return (-1);
	}

	return (1);
}
