n=int(input("Enter size of list : "))
l=[]
for i in range(0,n):
    s=input("Enter : ")
    l.append(s)
print(l)
print(sorted(l,key=len))
    