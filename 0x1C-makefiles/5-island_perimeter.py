#!/usr/bin/python3
""" Check the perimeter of an island """


def island_perimeter(grid):
    f = 0, h = 0
    for row in range(len(grid)):
        for c in range(len(grid[row])):
            if grid[row][c] == 1:
                f += 1
        if grid[row] == 1:
            h += 1
    f += 1
    return f * 2
