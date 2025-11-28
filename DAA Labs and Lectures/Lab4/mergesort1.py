# -*- coding: utf-8 -*-
"""
Merge sort
"""

def mergesort(arr):
    if(len(arr)<=1):
        return arr
    mid=len(arr)//2
    left=arr[:mid]
    right=arr[mid:]
    left=mergesort(left)
    right=mergesort(right)
    return(merge(left, right))


def merge(left, right):
    merge=[]
    i=j=0
    
    while i<len(left) and j<len(right):
        if(left[i])<right(left[j]):
            merge.append(left[i])
            i=i+1
            
        else:
            merge.append(right[j])
            i=i+1
            
    merge.extend(left[i:])
    merge.extend(right[j:])
    return merge

arr=[5,2,4,1,6,9,3]
print(mergesort(arr))
           