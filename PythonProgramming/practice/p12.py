def ins(l):
    for i in range(1, len(l)):
        key = l[i]
        j = i-1
        while j > 0 and key < l[j]:
            l[j+1] = l[j]
            j = j-1
            l[j+1] = key
    return l


n = int(input('Enter size of list : '))
l = []
for i in range(0, n):
    v = int(input("Enter element : "))
    l.append(v)
print(l)
print("Srted list ", ins(l))
