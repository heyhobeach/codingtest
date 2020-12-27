array=[1,5,2,6,3,7,4]
commands=[[2,5,3],[4,4,1],[1,7,3]]
answer = []
a=[]
for i in range (3):
    start=commands[i][0]
    start-=1
    end=commands[i][1]
    find=commands[i][2]
    find-=1
    a=array[start:end]
    a.sort()
    print(a)
    target=a[find]
    answer.append(target)
    print(target)
print(answer)

###############################################



#제출본 정답 for in 을 이용해 2차원 배열을 좀더 다양하게 이용해야함

def solution(array, commands):
    answer = []
    a=[]
    for command in commands :
        a=array[command[0]-1:command[1]]
                
        a.sort()
        target=a[command[2]-1]
        answer.append(target)
    return answer






