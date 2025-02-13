number1 = int(input("Enter number1: "))
operator = (input("Enter operator: + - * / or ^ "))
number2 = int(input("Enter number2: "))

if(operator=="+"):
    print(number1+number2)
elif(operator=="-"):
    print(number1-number2)
elif(operator=='*'):
    print(number1*number2)
elif(operator=="/"):
    if(number2 == 0):
        print("Divide by 0")
    else:
        print(number1/number2)
else:
    print(pow(number1,number2))