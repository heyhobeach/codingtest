def solution(s):
    answer = []
    count=0
    s=s.lower()
    for i in s:
        if i==" ":
            count=0
        else:
            if count%2==0:
                i=i.upper()
            count+=1
        answer.append(i)
    return "".join(answer)
    
    
    ######################################
    
    
    
    from functools import reduce
import math
str1="Hello      eVeryone"
str2="Try HelLo WOrld"
a=[]
'''list_count=0
answer=[]
count=0
sum=""
str1=str1.lower()
#a=list(map(str,str1.lower().split()))split(" ")을 안해서 나눠지긴했지만 공백기준이아니라 그냥 나눠짐
for i in str1:
    #if count%2==0:
    if i==" ":
        print("공백")
        count=0
    else:
        if count%2==0:
            i = i.upper()
            print(i,end="")
        else:
            print(i,end="")
        count+=1
    answer.append(i)
#print(" ".join(answer))
prn_an=f'answer={"".join(answer)}'
print()
print(prn_an)'''

b=" ".join(map(lambda x: "".join([j.lower() if i%2 else j.upper() for i,j in enumerate(x)]),str2.split(" ")))#처음에 공백을 기준으로 나누는데 만약 공백이여러개라면 공백도 리스트로 만들어버리고 그걸 그냥 마찬가지로 lambda했을때 어떤 이벤트없이 그냥 join으로 여백없이 공백만 붙이게됨
#리스트는 map을통해 lambda 안으로 들어가 enum 을통해 0이라면 False 1이면 True

print(str2)#로 if문으로 대소구별 이후 문자는 다시 "".join으로 합쳐줌 여기까지가 lambda 람다끝이나면 다음리스트넣어가며 반복  모든리스트가 끝이났다면 다시 join을 사용해 공백 생긴것을 split을 통해 만든 공백을 채워줌
#map(lambda x: [print(a) for i, a in enumerate(x)], str2.split(" "))



a="aaa     bbb"

a=a.split(" ")
print(a)
print(" ".join(a))
