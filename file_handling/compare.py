with open("file_handling/example1.txt",'r') as file1:
    content1 = file1.read()
with open("file_handling/example2.txt",'r') as file2:
    content2 = file2.read()
with open("file_handling/example3.txt",'r') as file3:
    content3 = file3.read()

if(content1 == content2):
    print("File1 and File2 have the same content")
else:
    print("File1 and File2 have different content")

if(content1 == content3):
    print("File1 and File3 have the same content")
else:
    print("File2 and File3 have different content")

if(content2 == content3):
    print("File2 and File3 have the same content")
else:
    print("File2 and File3 have different content")