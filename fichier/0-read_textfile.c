#include "main.h"
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
/**
 * read_textfile -  reads a text file and prints it to the POSIX stdout
 * @letters:  reads a text file and prints it to the POSIX standard output.
 * @filename: pointer to the file
 * Return: if fails 0 or do .. the number of bytes the func can R and P
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, rd, wr;
	char *buff;

	if (filename == NULL)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	op = open(filename, O_RDONLY);
	rd = read(op, buff, letters);
	wr = write(STDOUT_FILENO, buff, rd);

	if (op == -1 || rd == -1 || wr == -1 || wr != rd)
	{
		free(buff);
		return (0);
	}

	free(buff);
	close(op);

	return (wr);
}
