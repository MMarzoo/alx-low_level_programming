#!/usr/bin/python3
'''task 5 module'''


def island_perimeter(grid):
    '''returns the perimeter of the island described in grid'''
    total = 0
    last_fc = []
    current_fc = []
    for index, list in enumerate(grid):
        for idx, cell in enumerate(list):
            if cell == 1:
                current_fc.append(idx)
                if idx == 0 or list[idx - 1] == 0:
                    total += 1
                if idx == len(list) - 1 or list[idx + 1] == 0:
                    total += 1

                if idx not in last_fc:
                    total += 1

                if index + 1 < len(grid):
                    if grid[index + 1][idx] != 1:
                        total += 1
                else:
                    total += 1
        last_fc = current_fc.copy()
        current_fc = []

    return total
