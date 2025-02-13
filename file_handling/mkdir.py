import os

directory = "new_direct"

if os.path.exists(directory):
    print("Directory already present")
else:
    os.mkdir(directory)
    print("Directory: ",directory," made")