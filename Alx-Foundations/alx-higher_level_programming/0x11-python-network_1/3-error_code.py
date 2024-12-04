#!/usr/bin/python3
"""script that takes in a URL, sends a request to the URL and
displays the value of the X-Request-Id variable
found in the header of the response."""


if __name__ == '__main__':
    import urllib.request
    import sys
    url = sys.argv[1]
    with urllib.request.urlopen(url) as response:
        if response.getcode() >= 400:
            print("Error code: {}".format(response.getcode()))
        else:
            print(response.read())
