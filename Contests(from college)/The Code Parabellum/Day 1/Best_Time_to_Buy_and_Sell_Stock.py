str1=input()
len1=len(str1)
str1=str1[1:len1-1]
lst=list(map(int,str1.split(',')))
length=len(lst)
min=100000
ans=0
temp=0
for i in range(length):
    if min>lst[i]:
        min=lst[i]
    temp=lst[i]-min
    if temp>ans:
        ans=temp
print(ans)