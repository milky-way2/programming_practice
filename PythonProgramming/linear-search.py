# -*- coding: utf-8 -*-
"""
Created on Wed Nov 17 15:46:33 2021

@author: SOHAM CHAKRABORTTY
"""


list=[]
list=[item for item in input("Enter the list items : ").split()]
print(list)
def search(list,n):

    for i in range(len(list)):
        if list[i] == n:
            return True
    return False
  

n = input("Enter item to search : ")

  
if search(list, n):
    print(" Item is found in the list." )
else:
    print(" Item Not Found in the list")