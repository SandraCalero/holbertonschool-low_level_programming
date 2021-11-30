#!/usr/bin/python3
"""Returns the perimeter of the island described in grid
"""


def island_perimeter(grid):
    """Returns the perimeter of the island described in grid

    Args:
        grid (list): List of list of integers
            - 0 represents a water zone
            - 1 represents a land zone
            - One cell is a square with side length 1
            - Grid cells are connected horizontally/vertically
            (not diagonally).
            - Grid is rectangular, width and height don’t exceed 100
    """
    perimeter = 0
    row = len(grid)
    column = len(grid[0])
    for i in range(row):
        for j in range(column):
            if grid[i][j] == 0:
                continue
            perimeter += 4
            if i > 0:
                perimeter -= grid[i - 1][j]
            if j > 0:
                perimeter -= grid[i][j - 1]
            if i < (row - 1):
                perimeter -= grid[i + 1][j]
            if j < (column - 1):
                perimeter -= grid[i][j + 1]
    return perimeter
