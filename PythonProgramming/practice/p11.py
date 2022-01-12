def bs(l):
    for i in range(0, (len(l)-1)):
        for j in range((len(l)-1)):
            if l[j] > l[j+1]:
                temp = l[j+1]
                l[j+1] = l[j]
                l[j] = temp
    return l


n = int(input("Enter size of list : "))
l = []
for i in range(0, n):
    v = int(input("Enter element "))
    l.append(v)
print(l)
print("Sorted list is : ", bs(l))
