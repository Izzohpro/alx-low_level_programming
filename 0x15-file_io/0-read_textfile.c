#include "main.h"

/**
 * read_textfile - reads a text file and prints it's letters
 * @filename: the filename. to be printed
 * @letters: the number of letters printed.
 *
 * Return: printed numbers letter. if It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int mimo;
	ssize_t nrd, nwr;
	char *bob;

	if (!filename)
		return (0);
	mimo = open(filename, O_RDONLY);
	if (mimo == -1)
		return (0);
	bob = malloc(sizeof(char) * (letters));
	if (!bob)
		return (0);
	nrd = read(mimo, bob, letters);

	nwr = write(STDOUT_FILENO, bob, nrd);
	close(mimo);
	free(bob);

	return (nwr);
}


