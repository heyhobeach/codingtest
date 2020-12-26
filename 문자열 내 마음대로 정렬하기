case1=["sun","Bed","Car"]

a={j: i for i,j in enumerate(case1)}#enumerate로 i,j생성후 for문으로 딕셔너리 생성
print(a)
print(a["sun"])#이름으로 접근

n=1
n2=2
b=[]
index=[]
a={j:i for i,j in enumerate(str2)}
for i in range(len(str2)):
    b.append(str2[i][n2])
d={j:i for i,j in enumerate(b)}

new_str=[]
b=sorted(b)
print(b)
print(str2)
count=0
for j,i in enumerate(b):
    test=f'j= {j} i={i} ///// str is ={str2[j]}   pre is = {str2[j-1]} //// dict num is {d[i]} ////dict is  {d}'
    #print(test)
    if len(d)==len(b):
        new_str.append(str2[d[i]])
    else:
        if j==d[i]:
            new_str.append(str2[d[i]])
        else:
            #print(test)
            new_str.append(str2[j])
            if new_str[j]>new_str[j-1]:
                new_str[j],new_str[j-1]=new_str[j-1],new_str[j-1]
            print(new_str[j], new_str[j-1])




#new_str=sorted(new_str)
    #print(test)
    #print(str[0],str[2])
    #print(str[j], str[d[i]])
    #str[j],str[d[i]]=str[d[i]],str[j]

    #print(d[i])
#print(d)
'''for j,i in enumerate(b):
    print(j,i)

    #index.append(d[i])
    #str[j]=index[j]
    print(index[j],d[i])'''

#print(b)
dictlen=f'dict len is{len(d)}'
#print(a)'
print(dictlen)

print(str2[1])
print(str)
print(new_str)

#new_str.sort()

#print(new_str)


'''str[0],str[2]=str[2],str[0]

print(str)'''


##################################################################


return sorted(sorted(strings), key=lambda strings:strings[n])# 람다정렬 이용
