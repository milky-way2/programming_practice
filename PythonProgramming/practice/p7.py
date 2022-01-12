n = int(input("Enter size of dictionary : "))
d = {}
for i in range(0, n):
    k = input("Enter key : ")
    v = input("Enter value : ")
    d.update({k: v})
print(d)
