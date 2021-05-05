def match(s1,s3):
    l="NO"
    j=0
        
    s4=s3.split(" ")
    for j in range(0,len(s4)):
        s2=s4[j]
       # print(s2)
        for i in range(len(s2)):
            if (s1[:i]==s2[:i] and s1[i]!=s2[i] and s1[i+1:]==s2[i+1:]) or (s1[:i]==s2[:i] and s1[i]==s2[i] and s1[i+1:]==s2[i+1:]):
                l= "YES"
                break         
    return l

n=int(input())
s2=input()
k=int(input())
for i in range(0,k):
    s1=input()
    print(match(s1,s2))
    