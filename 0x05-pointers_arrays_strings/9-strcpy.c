#includ "main.h"

/**
 * char *_strcp - a function that copies the string pointed to by src
 * @dest: copy to src
 * @scr: copy from dest
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int 1 = 0;
	int x = 0;

	while (*(src + 1) != '\0')
	{
		1++;
	}
	for (; x < 1 ; x++)
	{
		dest[x] = src[x];
	}
	dest[1] = '\0';
	return (dest);
}
