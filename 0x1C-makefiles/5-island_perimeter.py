#!/usr/bin/python3
"""
Function to calculate the perimeter of the island described in grid.
"""

def island_perimeter(grid):
    """
    Calculate the perimeter of the island described in grid.

    Args:
        grid (list): A list of list of integers representing the island.

    Returns:
        int: The perimeter of the island.
    """

    perimeter = 0
    rows = len(grid)
    cols = len(grid[0])

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:  # If current cell is land
                perimeter += 4  # Add 4 to perimeter initially

                # Check adjacent cells (up, down, left, right)
                if i > 0 and grid[i - 1][j] == 1:  # Up
                    perimeter -= 2
                if j > 0 and grid[i][j - 1] == 1:  # Left
                    perimeter -= 2

    return perimeter
