#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid -free a 2 dimensional grid previously created
 * by aloc_grid function
 * @grid: rows of matrix
 * @height: columns of string
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;
	int *p;

	for (i = 0; i < height; i++)
	{
		p = grid[i];
		free(p);
	}
	free(grid);
}
