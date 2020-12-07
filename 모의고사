def solution(answers):
    answer = []
    
    a1=[1,2,3,4,5]
    a2=[2,1,2,3,2,4,2,5]#8
    a3=[3,3,1,1,2,2,4,4,5,5]#10
    
    count =[0,0,0]
    

    
    for i in range(len(answers)):
        if a1[i%len(a1)]==answers[i%len(answers)]:
            count[0]+=1
        if a2[i%len(a2)]==answers[i%len(answers)]:
            count[1]+=1
        if a3[i%len(a3)]==answers[i%len(answers)]:
            count[2]+=1
            
    return_count=max(count)
    
    if return_count==count[0]:
        answer.append(1)
    if return_count==count[1]:
        answer.append(2)
    if return_count==count[2]:
        answer.append(3)
        
    
    return answer
    
    
    #############################################################################
    
    
    a=[]

answer=[1,2,3,4,5]
answer2=[1, 3, 2, 4, 2]
answer3=[0,0,0]
a1=[1,2,3,4,5]
a2=[2,1,2,3,2,4,2,5]#8
a3=[3,3,1,1,2,2,4,4,5,5]#10



count=[0,0,0]
return_count=0


for i in range(len(answer)):
    print(i)
    if a1[i%len(a1)]==answer[i%len(answer)]:
        #print(a1[num])
        count[0]+=1

    if a2[i%len(a2)]==answer[i%len(answer)]:
        #print(a1[num])
        count[1]+=1

    if a3[i%len(a3)]==answer[i%len(answer)]:
        #print(a1[num])
        count[2]+=1



print(a)


return_count=max(count)
print(count[0],count[1],count[2])

if return_count==count[0]:
    a.append(1)
if return_count==count[1]:
    a.append(2)
if return_count==count[2]:
    a.append(3)



'''
print(max(count))
print(a1[0:5])
print(a1[:])
print(count)
max(count)'''

#for i in range(3):

print(a)


#print([i for i in range(len(answer)) if answer==a[i]])



'''
zip 사용법 for i,k,j in zip(a,b,c):
'''
    
