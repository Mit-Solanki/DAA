def fib(n):
    F=[-1 for i in range (n+1)]
    F[0]=0
    F[1]=1
    for i in range (2,n+1):
        F[i]=F[i-1]+F[i-2]
    return F[n]
n=int(input("enter number"))
# fib(n)
print("fibonacci number is: ",fib(n))