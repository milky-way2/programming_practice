
for n in range(1,201):
	c=0
	for i in range(2,n):
		if(n%i==0):
			c=1
			break
	if(c==0 and n!=1):
		print(n)		
