l=list()
t=int(input())
for i in range(0,t):
    k=int(input())
    l.append(k)

l.sort()
for j in range(0,t):
    print(l[j])