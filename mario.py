def get_int(prompt):
    while True:
        try:
            return int(input(prompt))
        except ValueError:
            print("Invalid input, try again.")


Height = get_int("Height: ")

while Height < 1 or Height > 8:
    print("Height must be between 1 and 8")

    Height = get_int("Height: ")

for i in range(1, Height + 1):
    print(" " * (Height - i) + "#" * i)
