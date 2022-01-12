# -*- coding: utf-8 -*-
"""
Created on Sat Oct 30 11:46:39 2021

@author: SOHAM CHAKRABORTTY
"""
("Enter 10 integers (each separated by ,) : ")

l= list(map(int,input("Enter the elements : ").split()))
print("Entered list  of 1o integers number is : ",l)
l1=[]
for i in range(0,10) :
    if(l[i]%2!=0):
        
        l1.append(l[i]);

s=0
s=sum(l1)
if s==0 :
    print("The given list does not contain any odd number.")
else :   
     print("List of only odd numbers from given list elements is : ",l1)
print("Summation of all odd numbers from the given list : ",s)

