#!/usr/bin/python3
"""Defines a function that divides all elements of a matrix."""


def matrix_divided(matrix, div):
    """Returns a new matrix.

    All elements of the matrix should be divided by div,
    rounded to 2 decimal places

    Raises:
        TypeError: if matrix is not a list of lists of integers or floats.
                   if rows of the matrix is not of the same size.
                   if div is not an integer or a float.
        ZeroDivisionError: if div is equal to 0
    """
    def matrix_divided(matrix, div):
        error = "matrix must be a matrix (list of lists) of integers/floats"
        error1 = "Each row of the matrix must have the same size"
        row_len = len(matrix[0])
        new_matrix = []
        if type(div) != int and type(div):
            raise TypeError("div must be a number")
        if div == 0:
            raise ZeroDivisionError("division by zero")
        for i in matrix:
            if row_len != len(i):
                raise TypeError(error1)
            for j in i:
                if type(j) != int and type(j) != float:
                    raise TypeError(error)
                new_matrix += round(j / div, 2)
        return new_matrix
