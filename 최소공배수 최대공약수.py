n=3
m=12
answer=[]
divlist=[]
#div=[]
#n//=2


if n>m:
    m,n=n,m


for i in range(n//2):
    i=i+1
    if n%i==0:
        divlist.append(i)
        prn_div=f'{i} 약수'
        print(prn_div)
    #print(i)
divlist.append(n)

for i in reversed(divlist):
    print(i)
    if m%i==0:
        same_div=f'공약수 = {i}'
        answer.append(i)
        print(same_div)
        break

answer.append((n*m)/answer[0])

print(m)
print(answer)


##############################
def solution(n, m):#내답안
    answer = []
    divlist=[]
    if n>m:
        m,n=n,m
        
    for i in range(n//2):
        i+=1
        if n%i==0:
            divlist.append(i)
    divlist.append(n)
    
    for i in reversed(divlist):
        if m%i==0:
            answer.append(i)
            break
    answer.append((n*m)/answer[0])
    return answer


################################
def solution(n, m):#다른사랍답
    gcd = lambda a,b : b if not a%b else gcd(b, a%b)#if not 으로 a%b가 0일때 참 아니면 거짓재귀함수사용으로 a%b==0이 될때까지 반복 즉 최대 공배수찾음
    lcm = lambda a,b : a*b//gcd(a,b)#최소 공약수는 최대공약수의 지수의 반대값이기 때문에 a*b를 곱하고 최대공약수를 나누어줌
    return [gcd(n, m), lcm(n, m)]
