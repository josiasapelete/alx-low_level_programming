#include "main.h"

/**
 * alloc_grid - Function that return a pointer to a
 * 2 dimensional array of int
 * @width: the width
 * @height: the height
 * Return: NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int h, w, **ptr = NULL;

	if (width <= 0 || height <= 0)
		return (NULL);
	ptr = malloc(sizeof(int *) * height);
	if (ptr == NULL)
		return (NULL);
	for (h = 0; h < height; h++)
	{
		ptr[h] = malloc(sizeof(int) * width);

		if (ptr[h] == NULL)
		{
			for (w = 0; w < h; w++)
				free(ptr[w]);
			free(ptr);
			return (NULL);
		}
		for (w = 0; w < width; w++)
		{
			ptr[h][w] = 0;
		}
	}
	return (ptr);

}
