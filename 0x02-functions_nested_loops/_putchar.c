#include <unistd.h>
/**
 * _putchar -writes the character c to srdout
 * @c: the character to print
 *
 * return: on success 1.
 * on error,-1 is returned, ans error is set approprieatly
 */
int _putchar(char c)
{
	return (write(1, &c,1));
}
