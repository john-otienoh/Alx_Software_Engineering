#!/usr/bin/python3

"""Define class student"""


class Student:
    """A class student"""
    def __init__(self, first_name, last_name, age):
        """Initiaizes the Student class
        Args:
            first_name(str): Student first name
            last_name(str): Student last name
            age(int): Student age
        """
        self.first_name = first_name
        self.last_name = last_name
        self.age = age

    def to_json(self):
        """Retrieves a dictionary representation of a Student instance"""
        return 
