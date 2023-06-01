#!/usr/bin/python3
""" Defines perimeter of the island described in grid"""


def island_perimeter(grid):
    def count_edges(i, j):
        edges = 0
        if i > 0 and grid[i - 1][j] == 1:
            edges += 1
        if i < height - 1 and grid[i + 1][j] == 1:
            edges += 1
        if j > 0 and grid[i][j - 1] == 1:
            edges += 1
        if j < width - 1 and grid[i][j + 1] == 1:
            edges += 1
        return edges

    width = len(grid[0])
    height = len(grid)
    perimeter = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                edges = count_edges(i, j)
                perimeter += 4 - edges

    return perimeter
