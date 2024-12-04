#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename.
 * @text_content: content written in the file.
 *
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int fD;
	int letter;
	int rwr;

	if (!filename)
		return (-1);

	fD = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fD == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (letter = 0; text_content[letter]; letter++)
		;

	rwr = write(fD, text_content, letter);

	if (rwr == -1)
		return (-1);

	close(fD);

	return (1);
}
