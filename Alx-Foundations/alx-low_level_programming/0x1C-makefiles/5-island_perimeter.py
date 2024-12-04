#!/usr/bin/python3
"""Function island_perimeter."""


def island_perimeter(grid):
    """
    Args:
        grid -  is a list of list of integers.
    Return:
        The perimeter of the island
    """
    w = len(grid[0])
    h = len(grid)
    size = 0
    edge = 0

    for i in range(h):
        for j in range(w):
            if grid[i][j] == 1:
                size += 1
                if j > 0 and grid[i][j - 1] == 1:
                    edge += 1
                if i > 0 and grid[i - 1][j] == 1:
                    edge += 1
    return (size * 4) - (edge * 2)
