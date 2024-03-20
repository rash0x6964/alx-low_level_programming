#!/usr/bin/python3

def island_perimeter(grid):
    """Calc the perimeter of the island described in grid"""
    rows, cols = len(grid), len(grid[0])
    neighbours, islands = 0, 0

    for row in range(rows):
        for col in range(cols):
            if grid[row][col] == 1:
                islands += 1
                if (col > 0 and grid[row][col - 1] == 1):
                    neighbours += 1
                if (row > 0 and grid[row - 1][col] == 1):
                    neighbours += 1
    return islands * 4 - neighbours * 2
