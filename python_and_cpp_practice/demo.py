a=[1,5,9,7,4,3,7,6,2]
temp=0
j=len(a)-1
i=a[0]
while(j>0):
    if j<i:
        temp=j
        j=i
        j=temp
    i+=1
    j+=1
print(a)