def strtolst(str1):
    len1=len(str1)
    str1=str1[1:len1-1]
    lst=list(map(int,str1.split(',')))
    return lst

string1=input()
string2=input()
ans=0
temp=10000
lst1=strtolst(string1)
lst2=strtolst(string2)
for i in lst1:
    for j in lst2:
        if i==j:
            lst1.remove(i)
            lst2.remove(j)
for i in lst1:
    for j in lst2:
        x=i^j
        if x<temp:
            temp=x
    ans=ans+temp
print(ans)
        
        
