# -*- coding: utf-8 -*-
"""
Created on Wed Oct 27 15:38:38 2021

@author: SOHAM CHAKRABORTTY
"""

n=int (input("Enter number of turns"))
n1=0;
n2=1;
print("Fibonacci series of",n,"element :  ");
print(n1,end=" ");
print(n2,end=" ");
for n in range(2,n):
    n3=n1+n2;
    print(n3,end=" ");
    n1=n2;
    n2=n3;
    
    
