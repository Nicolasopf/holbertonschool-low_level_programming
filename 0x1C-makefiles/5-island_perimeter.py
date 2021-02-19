#!/usr/bin/python3
""" Check the perimeter of an island """


def island_perimeter(grid):
    """ Return the perimeter of an island """
    # f = 0
    # h = 0
    # for row in range(len(grid)):
    #     for c in range(len(grid[row])):
    #         if grid[row][c] == 1 and grid[row+1][c]:
    #             h += 1
    #         elif grid[row][c] == 1 and grid[row][c+1]:
    #             f += 1
    # h += 1
    # f += 1
    # return (f+h) * 2

    x = grid.copy()
    x(filter(lambda a: a != 0, x))
    return x
