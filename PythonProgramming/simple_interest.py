pa=float (input("Enter principle amount : "))
t=int (input("Enter number of year : "))
r=float(input("Enter rate of interest : "))
i=(pa*r*t)/100
ta=pa+i
print("Amount of interest : ",i)
print("Total principle amount after interest calculation : ",ta)