# -*- coding: utf-8 -*-
"""
Created on Wed Oct 27 15:18:35 2021

@author: SOHAM CHAKRABORTTY
"""

n=int (input("Enter an intiger :  "))
if n>1 :
    for p in range(1,n):
        n=n*p;
    print("Your answer(factorial of given intiger) is : ",n);
if n==0 :
    print("Your answer(factorial of given intiger) is : 1");
if n==1 :
    print("Your answer(factorial of given intiger) is : 1" );   