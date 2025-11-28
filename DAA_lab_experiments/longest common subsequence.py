
def lcm(s1,s2):
    m=len(s1)
    n=len(s2)
    # l=[n+1][m+1]
    l=[[0 for j in range(n+1)]for i in range(m+1)]
    for i in range(1,m+1):
        for j in range(1,n+1):
            if(s1[i-1]==s2[j-1]):
                l[i][j]=1+l[i-1][j-1]
            else :
                l[i][j]=max(l[i][j-1],l[i-1][j])
    return l[m][n]

s1=str(input("enter string 1: "))
s2=str(input("enter string 2: "))
# lcm(s1,s2)
print("length of longest common subsequence is: ",lcm(s1,s2))