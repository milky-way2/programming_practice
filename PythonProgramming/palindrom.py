# -*- coding: utf-8 -*-
"""
Created on Sat Oct 30 11:30:13 2021

@author: SOHAM CHAKRABORTTY
"""

num=int(input("Enter a number : "))
temp=num
reverse=0
while(temp!=0):
    remainder=temp%10;
    reverse=reverse*10+remainder;
    temp=temp//10
if(reverse==num) :
    
    print(num," is a palindrome number.");
else :
     print(num," is not a plindrome number.");
