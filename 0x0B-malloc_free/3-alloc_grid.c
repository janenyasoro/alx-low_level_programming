#include <stdio.h>
#include <stdlib.h>
/**
 * @@*alloc_grid - a pointer to a 2 dimensional array of integers
 * every element initialized to 0
 * @width- the width of the integer
 * @length - the lentgh of the integer
 * returns - NULL on failure
 */
int **alloc_grid(int width, int height)
{
    int **grid;
    int i, j;

    if (width <= 0 || height <= 0)
        return (NULL);
    grid = (int **)malloc(height * sizeof(int *));
    if (grid == NULL)
        return (NULL);i
		 for (i = 0; i < height; i++)
    {
        grid[i] = (int *)malloc(width * sizeof(int));
        if (grid[i] == NULL)
        {
            for (j = 0; j < i; j++)
                free(grid[j]);
            free(grid);
            return (NULL);
        }
    }
     for (i = 0; i < height; i++)
    {
        for (j = 0; j < width; j++)
        {
            grid[i][j] = 0;
        }
    }
   return (grid);
}
