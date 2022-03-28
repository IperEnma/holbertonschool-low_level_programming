/**
 *
 *
 *
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_APPEND, 0600);

	if (fd == -1)
		return (-1);
	wrie
}
