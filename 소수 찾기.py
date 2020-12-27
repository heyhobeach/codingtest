n=10
c=[True]*n#전부 소수로 초기화 리스트(배열)주소는 0 ~ n-1까지 접근할수있기에 리턴을 숫자가 얼마까지 있는지를 알고싶기에 n+1을 해줘야함
m=int(n**0.5)#n의 최대약수
for i in range(2,m+1):#range는 가장끝은 포함 안하기때문에 +1을해줘서 포함시켜줘야함
     #print(i)
     if c[i]==True:#처음수는 항상 소수기에 나머지 배수는 소수가아님
          for j in range(i+i,n,i):#i+i를 함으로서 이중for문에서 수가 증가함에따라서 똑같이 증가할수있도록함 그리고 마찬가지로 증감식도 i도 증가하도록함
               print(j)
               c[j]=False#같은수의 배수는 약수이므로 false처리함
          print(c)

print([i for i in range(2,n) if c[i]==True])
print(c)

################################################


n=100
count=0

for i in range(2,n+1):
     for j in range(2,i):
          if i%j==0:
               count+=1
               break


print(n-1-count)
