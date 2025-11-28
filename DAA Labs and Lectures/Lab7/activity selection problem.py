


sequence = [0, 1, 2, 3, 4, 5, 6]
start    = [1, 3, 0, 5, 8, 5, 6]
end      = [2, 4, 6, 7, 9, 9, 10]
final=[]

list =zip(start,end,sequence)
list=sorted(list,key=lambda x:x[1])

# print(list)
# 0=start, 1=end,  2=sequence
final.append(list[0][2])
time=list[0][1]
# print(time)
for i in range(len(list)-1):
    if time<=list[i+1][0]:
        final.append(list[i+1][2])
        i+=1
        time=list[i][1]
        print(time)
    
    
print(final)