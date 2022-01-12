# -*- coding: utf-8 -*-
"""
Created on Wed Nov  3 15:20:39 2021

@author: SOHAM CHAKRABORTTY
"""
l= list(map(int,input("Enter 10 integers : ").split())) 
t=tuple(l)
print( "Entered Tuple is : " ,t)
s=0
for i in range(0,len(t)) :
    if (t[i]%2!=0):
       s+=t[i] 
if s==0 :
    print("The given list does not contain any odd number.")
else :
   print("Summation of all odd numbers from the given list : ",s)
      