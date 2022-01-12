n = int(input("Enter size of list : "))
l = []
l1 = []
j = 0
for i in range(0, n):
    s = int(input("Enter value : "))
    l.append(s)
print(l)
for i in range(0, n):
    if(l[i] % 2 != 0):
        l1.append(l[i])
print(l1)
