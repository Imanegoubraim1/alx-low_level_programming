#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int n;
	int m;

	while (n <= 9)
	{
		m = 0;
		while (m <= 9)
		{
			if (n != m && n < m)
			{
				putchar(n + 48);
				putchar(m + 48);

				if (n + m != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			m++
		}
		n++

		return (0);
