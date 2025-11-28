def solve(coin,amount):

    n=len(coin)
    t=[(n+1)]
    for i in range(amount):
        for j in range(len(coin)):
            if(coin[j]<coin[i]):
                t[i,j]=t[i-1,j]
            else:
                t[i,j]=min(1+t[i,j-coin[i]],t[i-1,j])
    print(t[n,amount])


c=int(input("no of coins available"))
coin=[]
for i in range(c):
    temp=int(input("enter the coin value"))
    coin.append(temp)

amount=int(input("enter the amount to be made"))
solve(coin,amount)