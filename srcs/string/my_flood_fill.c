#include "my_libc.h"

/**
 * @brief Checks if the given coordinates (x, y) are valid for flood fill.
 *
 * This function checks if the coordinates (x, y) are within the bounds of the map
 * and if the cell at those coordinates is one of the valid characters ('0', ' ', 'N', 'S', 'W', 'E').
 *
 * @param x The x-coordinate to check.
 * @param y The y-coordinate to check.
 * @param map The 2D array representing the map.
 * @return 1 if the coordinates are valid, 0 otherwise.
 */
static int is_valid(int x, int y, char **map);

/**
 * @brief Performs a flood fill on the map starting from the given coordinates (x, y).
 *
 * This function marks the starting cell and recursively fills adjacent cells
 * that are valid and not already filled. The fill character used is 'F'.
 *
 * @param x The starting x-coordinate for the flood fill.
 * @param y The starting y-coordinate for the flood fill.
 * @param map The 2D array representing the map.
 * @return 1 if the flood fill was successful, 0 otherwise.
 */
int flood_fill(int x, int y, char **map);

static int	is_valid(int x, int y, char **map)
{
	if (x >= 0 && map[x] && y >= 0 && map[x][y] && (map[x][y] == '0'
			|| map[x][y] == ' ' || map[x][y] == 'N' || map[x][y] == 'S'
			|| map[x][y] == 'W' || map[x][y] == 'E'))
		return (1);
	return (0);
}

int	flood_fill(int x, int y, char **map)
{
	if (!is_valid(x, y, map) || map[x][y] == 'F')
		return (0);
	map[x][y] = 'F';
	if (flood_fill(x + 1, y, map))
		return (1);
	if (flood_fill(x - 1, y, map))
		return (1);
	if (flood_fill(x, y + 1, map))
		return (1);
	if (flood_fill(x, y - 1, map))
		return (1);
	return (0);
}