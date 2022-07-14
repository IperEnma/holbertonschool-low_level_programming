#!/usr/bin/python3
"""module with function island_perimeter"""


def island_perimeter(grid):
    """returns the perimeter of the island described in grid"""

    perimeter = 0
    for x in range(len(grid)):
        for y in range(len(grid[x])):
            if grid[x][y] == 1:
                perimeter += 4
                if y > 0:
                    if grid[x][y-1] == 1:
                        perimeter -= 2
                    if grid[x-1][y] == 1:
                        perimeter -= 2
    return perimeter
