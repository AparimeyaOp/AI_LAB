a,b,c = list(map(int,(input("Enter nummbers: ").split())))
if(a>=b and b>=c):
    print("The maximum values is: ",a)
elif(b>a and b>c):
    print("The maximum value is: ",b)
else:
    print("Maximum value is: ",c)