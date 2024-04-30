#    shape.py: Handling tetromino-like shapes or larger.
#    Copyright (C) 2024  Ramprasad S. Joshi
#
#    This program is free software: you can redistribute it and/or modify
#    it under the terms of the GNU General Public License as published by
#    the Free Software Foundation, either version 3 of the License, or
#    (at your option) any later version.
#
#    This program is distributed in the hope that it will be useful,
#    but WITHOUT ANY WARRANTY; without even the implied warranty of
#    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
#    GNU General Public License for more details.
#
#    You should have received a copy of the GNU General Public License
#    along with this program.  If not, see <https://www.gnu.org/licenses/>.

import numpy


class Shape(object):
    def __init__(self, mat=numpy.array([[True, True, True, True]])):
        if str(type(mat)) == "<class 'numpy.ndarray'>":
            self.matrix = mat
        else:
            raise Exception(
                "Expected matrix, found " + str(mat) + " a " + str(type(mat))
            )

    def fliplr(self):
        for row in range(self.matrix.shape[0]):
            self.matrix[row] = [
                self.matrix[row][i] for i in range(self.matrix.shape[1] - 1, -1, -1)
            ]

    def flipud(self):
        firstrow = 0
        exchangerow = self.matrix.shape[0] - 1
        while firstrow < exchangerow:
            temp = self.matrix[firstrow].copy()
            self.matrix[firstrow] = self.matrix[exchangerow].copy()
            self.matrix[exchangerow] = temp.copy()
            firstrow += 1
            exchangerow -= 1

    def transpose(self):
        self.matrix = self.matrix.transpose()

    def rotateCW(self):
        self.flipud()
        self.transpose()

    def rotateAntiCW(self):
        self.transpose()
        self.flipud()

    def __str__(self):
        string = ""
        for row in range(self.matrix.shape[0]):
            for col in range(self.matrix.shape[1]):
                if self.matrix[row][col]:
                    string = string + "\u25A1 "
                else:
                    string = string + "  "
            string = string + "\n"
        return string


if __name__ == "__main__":
    from allextetrominoes import *

    shape0 = Shape()
    for i in range(1, 74):
        shape1 = Shape(eval("Extetromino" + str(i)))
        print(str(shape1))
        shape1.rotateCW()
        print(str(shape1))
        shape1.rotateAntiCW()
        shape1.rotateAntiCW()
        print(str(shape1))
