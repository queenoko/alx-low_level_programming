

#!/usr/bin/python3
"""This Module calculates the perimeter of an island in a grid."""


def num_water_neighbors(grid, x, z):
    """Returns number of water neighbors a cell has in a grid..."""

    list_grid = 0

    if x <= 0 or not grid[x - 1][z]:
        list_grid += 1
    if z <= 0 or not grid[x][z - 1]:
        list_grid += 1
    if z >= len(grid[x]) - 1 or not grid[x][z + 1]:
        list_grid += 1
    if x >= len(grid) - 1 or not grid[x + 1][z]:
        list_grid += 1

    return list_grid


def island_perimeter(grid):
    """This Returns the perimeter of the island in grid."""

    perimeter_value = 0
    for x in range(len(grid)):
        for z in range(len(grid[x])):
            if grid[x][z]:
                perimeter_value += num_water_neighbors(grid, x, z)

    return perimeter_value
