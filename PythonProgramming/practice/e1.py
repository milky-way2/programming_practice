s = input("Enter string : ")
r = s[::-1]
if s == r:
    print("palindrome!")
else:
    x = 0
    y = len(s)-1
    while(x < y):
        if s[x] == s[y]:
            x += 1
            y -= 1

        else:
            break
    print("Not palindrom at position : ", x+1)
