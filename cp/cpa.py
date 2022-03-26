from itertools import combinations_with_replacement
from itertools import permutations 
t=int(input())
g=0
y=0
for i in range(0,t):
    l=[]
    s1,m1 = input().split(" ")
    s=int(s1)
    m=int(m1)
    w=s
    for j in range(1,(m+1)):
        l.append(j)        
    for z in range(w,0,-1):        
        com=combinations_with_replacement(l,(z+1))       
        for p in list(com):
            seq=permutations(p)
            seq1= set(seq)
            for q in list(seq1):
                    if(sum(q)==s):
                        g=g+1
           
    print(g)
    g=0