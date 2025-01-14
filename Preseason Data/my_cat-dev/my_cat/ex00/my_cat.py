
import sys
def my_cat(files):
    for item in files:
        with open(item, 'r') as access:
            print(access.read(), end = "")


if __name__ == '__main__':
    my_cat(sys.argv[1:])

