d={}
n=int(input("Enter the number of students : "))
for i in range(0, n):
    print(i+1, "Student ", end=' ')
    k = int(input("roll : "))
    print(i+1, "Student ", end=' ')
    v = input("Name : ")
    d.update({k: v})


print("Studen name with 'Even' roll no are :   ")
for i in d: 
	if i%2==0: 
		print(i,d[i])