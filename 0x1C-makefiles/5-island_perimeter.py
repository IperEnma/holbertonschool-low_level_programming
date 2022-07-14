#!/usr/bin/python3
"""module with function island_perimeter"""

def island_perimeter(grid):
    """returns the perimeter of the island described in grid"""

    for row in grid:
        if len(row) != len(grid[0]):
            return (0)

    perimeter = 0;
    for column in grid:
        for row in column:
            if row == 1:
                perimeter += 2;
    if perimeter != 0:
        perimeter += 2;
    return perimeter
