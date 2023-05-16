#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **push;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	push = malloc(sizeof(int *) * height);

	if (push == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		push[x] = malloc(sizeof(int) * width);

		if (push[x] == NULL)
		{
			for (; x >= 0; x--)
				free(push[x]);

			free(push);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			push[x][y] = 0;
	}

	return (push);
}
