#!/usr/bin/python3
"""Define class Base"""
import turtle


class Base:
    """Base model.
    Represents the base clss for all othe classes.

    Private Class Attributes:
    __nb_objects(int): Number f instantiated bases.
    """
    __nb_objects = 0

    def __init__(self, id=None):
        """Initialize a new Base.

        Args:
            id(int): Identity of the new Base
        """
        if id is not None:
            self.id = id
        else:
            Base.__nb_objects += 1
            self.id = Base.__nb_objects

    def draw(list_rectangles, list_squares):
        """Draw Rectangles and Squares using the turtle module.

        Args:
            list_rectangles (list): A list of Rectangle objects to draw.
            list_squares (list): A list of Square objects to draw.
        """
        turt = turtle.Turtle("turtle")
        turt.screen.bgcolor("khaki")
        turt.pensize(2)

        turt.color("black")
        for rect in list_rectangles:
            turt.showturtle()
            turt.up()
            turt.goto(rect.x, rect.y)
            turt.down()
            for i in range(2):
                turt.forward(rect.width)
                turt.left(90)
                turt.forward(rect.height)
                turt.left(90)
            turt.hideturtle()

        turt.color("brown")
        for sq in list_squares:
            turt.showturtle()
            turt.up()
            turt.goto(sq.x, sq.y)
            turt.down()
            for i in range(2):
                turt.forward(sq.width)
                turt.left(90)
                turt.forward(sq.height)
                turt.left(90)
            turt.hideturtle()

        turtle.exitonclick()
