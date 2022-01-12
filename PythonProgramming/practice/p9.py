n = int(input("Enter the number : "))
p=n
l = []
j = 0
while(n % 10 != 0):
    s = n % 10
    l.append(s)
    n = n//10
    j = j+1
    nn = 0
for i in range(0, len(l)):
    nn = l[i]*pow(10, (j-1))+nn
    j=j-1
print(nn)
if (nn==p):
    print("Palindrom")
else:
    print("Not palindrom")
