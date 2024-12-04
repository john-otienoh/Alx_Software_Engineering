#!/usr/bin/python3
import json
"""Define python object to json convertor function"""


def from_json_string(my_str):
    """Returns an object (Python data structure"""
    return json.loads(my_str)
