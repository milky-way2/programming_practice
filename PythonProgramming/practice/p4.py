n=int(input("Enter n : "))
t1=0
t2=1
if n==0:
    print("Nothing to pri.....")
elif n==1:
    print("0")
elif n==2:
    print("0 1")    
else:    
    print(t1,t2,end=' ')
    for i in range(0,(n-2)):
        t3=t1+t2
        t1=t2
        t2=t3
        print(t3,end=' ')    