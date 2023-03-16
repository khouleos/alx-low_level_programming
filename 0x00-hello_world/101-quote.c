#include <stdio.h>

/**
 * main - prints "and that piece of art is useful" - Dora Korpar, 2015-10-19" without printf or puts
 *
 * Return - 0 Success
 */
int main(void)
{
	char s[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	for (int i = 0; s[i] != '\0'; i++) {
		putchar(s[i]);
	}
	return (0);
}
