with open("file_handling/add_del.txt",'w') as file:
    file.write("Cat\ndog\nbear\nhello\nelephant\nhello\ntiger\nhello\nhorse")

final_content = ""
file = open("file_handling/add_del.txt",'r')
for x in file:
   if(x.strip() != "hello"):
       final_content += x

with open("file_handling/add_del.txt",'w') as wfile:
    wfile.write(final_content)

with open("file_handling/add_del.txt",'r') as rfile:
    print(rfile.read()) 