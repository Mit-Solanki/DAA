lock=9287
password=4165

sum=0
while(lock>0):
    l=lock%10
    u=password%10
    rotation=0
    rotation+=min(abs(l-u),10-abs(l-u))
    lock//=10
    password//=10   
    sum+=rotation
print(sum)