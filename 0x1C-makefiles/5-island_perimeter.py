#!/usr/bin/python3
""" Check the perimeter of an island """


def island_perimeter(grid):
    f = 0
    for row in range(len(grid)):
        for c in range(len(grid[row])):
            if grid[row][c] == 1:
                f += 1
    f += 1
    return f * 2
