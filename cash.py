from cs50 import get_float

while True:
    Change = get_float("Change: ")
    if Change >= 0:
        break

Change = round(Change * 100)


