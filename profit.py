cost = float(input("Enter cost price: "))
sell = float(input("Enter selling price: "))
if(cost<sell):
    profit = ((sell-cost)/cost)*100
    print("Profit of: ",profit," %")
elif(cost>sell):
    loss = ((cost-sell)/cost)*100
    print("Loss of: ",loss," %")
else:
    print("No profit nor loss")
