num = int(input("Enter number: "))
i = 2
flag = True
if(num<=0):
    print("Niether prime nor composite!!")
while(i<num):
    if(num%i == 0):
        
        flag = False
        break
    i += 1
if(flag == False):
    print("Number is not prime")
else:
    print("Number is prime!!!")

    
