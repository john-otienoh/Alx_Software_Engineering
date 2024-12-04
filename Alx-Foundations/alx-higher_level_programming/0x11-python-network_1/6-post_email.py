#!/usr/bin/python3
"""script that fetches https://alx-intranet.hbtn.io/status
using requests
"""


if __name__ == '__main__':
    import requests
    import sys
    url = sys.argv[1]
    email = sys.argv[2]
    response = requests.post(url, 'email'=email)
    print(response.text)
