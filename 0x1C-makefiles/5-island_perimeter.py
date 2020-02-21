#!/usr/bin/python3
"""island_perimeter method and it's dependencies"""


def island_perimeter(grid):
    """Calculates the perimeter of a grid based on given rules"""

    perim = 0
    for x in range(len(grid)):
        for y in range(len(grid[x])):
            if grid[x][y] == 1:
                if not grid[x + 1][y] or grid[x + 1][y] == 0:
                    perim += 1
                if not grid[x - 1][y] or grid[x - 1][y] == 0:
                    perim += 1
                if not grid[x][y + 1] or grid[x][y + 1] == 0:
                    perim += 1
                if not grid[x][y - 1] or grid[x][y - 1] == 0:
                    perim += 1
    return (perim)