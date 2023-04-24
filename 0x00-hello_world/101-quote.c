#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: 1 (success)
 */
int main(void)
{
	const char *d = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	int i;

	for (i = 0; d[i] != '\0'; i++)
		{
		putchar(d[i]);
		}
	putchar('\n');
	return (1);
}
