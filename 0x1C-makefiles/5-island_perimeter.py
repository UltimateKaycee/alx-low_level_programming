#!/usr/bin/python3
"""A script that defines an island perimeter-measuring function."""


def island_perimeter(grid):
    """Function to return perimiter of an island.

    grid represents water by 0 and land by 1.

    Argsument:
        grid (list): list of integers representing island.
    Returns:
        Perimeter of island defined in grid.
    """
    width = len(grid[0])
    height = len(grid)
    the_edge = 0
    size = 0

    for one in range(height):
        for two in range(width):
            if grid[one][two] == 1:
                size += 1
                if (two > 0 and grid[one][two - 1] == 1):
                    the_edge += 1
                if (one > 0 and grid[one - 1][two] == 1):
                    the_edge += 1
    return size * 4 - the_edge * 2
