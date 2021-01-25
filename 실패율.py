import operator
n=6
stages=[2,1,2,6,2,4,3,3]
#n=6
#stages=[4,4,4,4,4]
#n=8
#stages=[1,2,3,4,5,6,7]
answer=[]
temp1=[1,2,3,4,5,7]
temp=0
stages.sort()
print(stages)
dic={}
for i in range(n):
    test=f'클리어 못한사람 {stages.count(i+1)} /스테이지에 도달한 사람 {len(stages)-temp}'
    print(test)
    if len(stages) - temp == 0:
        answer.append(0.0)
        dic[(i + 1)] = answer[i]
        continue
    answer.append(stages.count(i + 1) / (len(stages) - temp))
    #else:
    print(test)#머무르지않을때의 실패율
    temp += stages.count(i + 1)
    dic[(i+1)]=answer[i]

a=(sorted(temp1,key=lambda x:dic[x],reverse=True))#람다 키정렬 딕셔너리에 X값 들어가면
print(a)

###################
import operator
def solution(N, stages):
    stages.sort()
    dic={}
    temp=0 
    answer = []
    for i in range(N):
        if len(stages)-temp==0:
            answer.append(0.0)
            dic[(i+1)]=answer[i]
            continue
        answer.append(stages.count(i+1)/(len(stages)-temp))
        temp+=stages.count(i+1)
        dic[(i+1)]=answer[i]
    a=(sorted(dic,key=lambda x:dic[x],reverse=True))
    answer=[]

    answer=list(map(int,answer))
    
    return a
