#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename to be created
 * @text_content: contecnt to be written in the file
 * Return: 1 (success). if it fails -1.
 */
int create_file(const char *filename, char *text_content)
{
	int zino;
	int mimo;
	int dino;

	if (!filename)
		return (-1);

	zino = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (zino == -1)
		return (-1);
	if (!text_content)
		text_content = "";
	for (mimo = 0; text_content[mimo]; mimo++);
	dino = write(zino, text_content, mimo);
	if (dino == -1)
		return (-1);
	close(zino);

	return (1);

}
