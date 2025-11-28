


def composite(num):
    count=0
    if(num==0 or num==1): return 0
    if(num%4==0): return num//4
    if(num%2==0): 
        num=num-6
        count+=1
        count+=num//4
        return count
    else:
        num=num-9
        count+=1
        count+=num//4
        return count
    

num=int(input("Enter a number: "))
print(composite(num))
