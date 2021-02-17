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


################################
prices=[1,2,3,2,3]
plen=len(prices)
st=[]
answer=[0]*plen
a=[]

for i in range(plen):#i는 시간
    test=f'st = {st}'
    print(test)
    while st and prices[st[-1]]>prices[i]:#이전 금액과 현재 금액과 비교함 이전금액은 st에 시간의 정보가 담겨져 있기때문에 알수있음
        top=st.pop()
        answer[top]=i-top#줄어든 값을 직접 바로 넣음 값은 i(현재시간) -top(st.pop의 값인 이전 값 즉 이전 시간) 하면 현재 주식 의 상승치와 감소했을때의 유지시간을 알수있다.
        print("떡락")
    print("append")
    st.append(i)#이전금액과 현재 금액을 비교했을경우 while 조건이 맞지 않은경우 즉 현재의 값이 이전값보다 근경우
print("for문 종료")
while st:#여기서 실질적으로 answer로 답을 넣음 단 while의 조건이 맞지않는 답만 넣게됨 while 조건 맞는 답은 이미 설정되어있음
    top =st.pop()
    print(st)
    answer[top]=plen-1-top#처음은 0 그다음 시간 1 2 3 ...길이에서 0 1 2 3 순으로 빠짐 길이 -1 - top , 금액이나 문제 특성상 순서대로 0 1 2 3 순서대로라서 리스트 순서에서 1을 더해주면됨 따라서
print(answer)#answer[top]=plan-1-top을 하게되면 answer[3]=plan-3-1초인 answer[3]=1초 가능한 이유 st에 저장했으며 st는 시간에따라서 저장한 값임 1원은 몇초 2원은 몇초 3원은 몇초 .... 따라서
#st.pop을 하게된값인 top은 answer[top]=plane-1-top 을 할수있다.


