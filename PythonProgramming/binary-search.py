# -*- coding: utf-8 -*-
"""
Created on Wed Nov 17 16:09:36 2021

@author: SOHAM CHAKRABORTTY
"""
   
def binary_search(list1, n):  
    low = 0  
    high = len(list1) - 1  
    mid = 0  
  
    while low <= high:  
        
        mid = (high + low) // 2  
  
          
        if list1[mid] < n:  
            low = mid + 1  
  
          
        elif list1[mid] > n:  
            high = mid - 1  
  
        else: 
            return mid;
             
      
              
    return -1  
  
  
list1 = []
list1=[item for item in input("Enter the list items : ").split()]
print(list1)
n = input("Enter item to search : ")  
  

result = binary_search(list1, n)  
  
if result != -1:  
    
    print("Element is present in the given list  at index", str(result)) 
else:  
    print("Element is not present in the given list.")