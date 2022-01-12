n = int(input("Enter size of tupple : "))
l = []
for i in range(0, n):
    s = int(input("Enter : "))
    l.append(s)
t = tuple(l)
print(t)
s = 0
for i in range(0, n):
    if(t[i] % 2 != 0):
        s = s+t[i]
if s == 0:
    print("No odd number is present")
else:
    print(s)
