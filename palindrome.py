word = input("Enter word to check: ")
word.lower()
flag = True
i = 0
j = len(word)-1
while(i!=j):
    if(word[i]!=word[j]):
        flag = False
        break
    i += 1
    j -= 1
if(flag == True):
    print("The entered word is a palindrome")
else:
    print("The entered word is not a palindrome")
