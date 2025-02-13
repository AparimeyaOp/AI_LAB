count = 0
year = 2001
while(count<10):
    if(year%4 == 0):
        if(year%100 != 0 or (year%100==0 and year%400==0)):
            print(year," ")
            count+=1
    year += 1


