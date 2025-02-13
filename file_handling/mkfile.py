import os

file_name = "new_file.txt"

if os.path.exists("new_file.txt"):
    print("file exists")
    file = open("new_file.txt",'w')
    file.write("hello_world")
else:
    file = open("new_file.txt",'w')
    file.write("hello_world")
    