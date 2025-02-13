def factorial(number):
    if(number == 1 or number == 0):
        return 1
    return(number*factorial(number-1))



num = int(input("Enter a number: "))
print(factorial(num))

if(num == 0):
    print("Factoral is: ",1)
op = 1
while(num>1):
    op *= num
    num -= 1
print("Factorial is: ",op)




