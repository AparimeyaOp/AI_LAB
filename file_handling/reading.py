import os

file_path = "file_handling/example.txt"
if os.path.exists(file_path):
    with open(file_path, "r") as file:
        for line in file:
            print(line)
else:
    print("File not found.")
