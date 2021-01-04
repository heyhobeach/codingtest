x=-4
n=2
temp=x
answer=[]

#[x+x for x in range(1,n+1)] 내가했던 시도 안됬던 이유 x를넣어서 하는것이아니라 n만큼 증가시는것이기때문에 range에다가 range를 받아오는값에다가 x값을 곱해줘야했었음
#하지만 그냥 반복만 시키는것에 초점을 두고 range만 사용해 값이 원하는대로 나오지않았음

'''for i in range(n):
    answer.append(x)
    x+=temp
print(answer)'''


#print([i*x+x for i in range(n)]) #다른사람풀이 리스트 컴프리헨션을 이용해서 줄일수있음 그냥 x+x가
