#include<unistd.h>

/**
 * main:" _putchar _write the character c to stdout"
 *
 * @c: character to print
 *
 * Return: on success 1.
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
