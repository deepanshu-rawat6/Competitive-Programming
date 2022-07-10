def merge_the_tools(string, k):
    for i in range(0,len(string),k):
        s=string[i:i+k]
        lst=[]
        for i in s:
            if i not in lst:
                print(i,end='')
                lst.append(i)
        print()

