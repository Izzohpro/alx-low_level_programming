#include "main.h"

/**
 * append_text_to_file - appends text at the end of a fil
 * @filename: filename to be added.
 * @text_content: content added.
 * Return: 1 if the file exists. -1 if does not exist
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int zino;
	int mimo;
	int dino;
	
	if (!filename)
		return (-1);

	zino =open(filename, O_WRONLY | O_APPEND);

	if (zino == -1)
		return (-1);
	
	if (text_content)
	{
                for (mimo = 0; text_content[mimo]; mimo++);
		
		dino = write(zino, text_content, mimo);
		if (dino == -1)
			return (-1);
	}
	
	close(zino);

	return (1);
}
