prices=[1,2,3,2,3]
plen=len(prices)

answer=[]

for i in range(plen):
    count=0
    for j in range(i+1,plen,+1):
        count+=1
        if prices[i]>prices[j]:
            break
    answer.append(count)
print(answer)


##########################
def solution(prices):
    answer = []
    plen=len(prices)
    for i in range(plen):
        count=0
        for j in range(i+1,plen,+1):
            count+=1
            if prices[i]>prices[j]:
                break
        answer.append(count)
    return answer
