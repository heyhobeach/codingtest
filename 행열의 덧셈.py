arr1=[[1,2],[2,3]]
arr2=[[3,4],[5,6]]
arr_1=[[1],[2]]
arr_2=[[3],[4]]
answer=[]
temp=[]
'''for i in range(len(arr1)):
    answer.append(arr1[i]+arr2[i])'''


for i,j in zip(arr1,arr2):#원래 풀고자 했던 방향 다른사람이 풀었는답안 난 풀지못했음 반복사이에 temp를 넣어서 초기화를 해줘야 했었음
    temp=[]
    for t1,t2 in zip(i,j):
        temp.append(t1+t2)
        print(temp)
    answer.append(temp)



################################################
'''for k,(i,j) in enumerate(zip(arr1,arr2)):#제출했던 답안 
    print(k,i,j)
    answer.append([])
    for value in range(len(i)):
        print(i[value]+j[value])
        answer[k].append(i[value]+j[value])'''

prn_answer=f'answer= {answer}'
print(prn_answer)
#print(answer)


##################
def solution(arr1, arr2):#제출본
    answer = []
    for k,(i,j)in enumerate(zip(arr1,arr2)):
        answer.append([])
        for value in range(len(i)):
            answer[k].append(i[value]+j[value])
    return answer




