n = int(input("Enter size of dictionary : "))
d = {}
for i in range(0, n):
    print(i+1, "Student ", end=' ')
    k = int(input("roll : "))
    print(i+1, "Student ", end=' ')
    v = input("Name : ")
    d.update({k: v})
print(d)
p = d.keys()
p = list(p)
p.sort()
for i in range(0, len(d)):
    print(p[i], d[p[i]])
