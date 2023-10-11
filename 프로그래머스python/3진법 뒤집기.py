n=125
################################################################
def power(n,p):
    if p==0:
        return 1

    power_p_div_by_2=power(n,p//2)
    if p%2:
        return n*power_p_div_by_2*power_p_div_by_2
    else:
        return power_p_div_by_2*power_p_div_by_2
        
        
        
  ################################################################

answer=''
while n//3>0:
    remain=n%3
    answer=str(remain)+answer
    n//=3
    if n<3:#n이 3보다 작으면 어차피 나눌것도 없이 그냥그대로 넣어야함
        answer=str(n)+answer
revers=answer[::-1]
print(answer)
print(revers)
flip_num=0
place=len(revers)-1
for i in range(len(answer),0,-1):
    print(i)
    flip_num+=int(answer[i-1])*power(3,i-1)
    place-=1
    print(flip_num)

#revers=int(revers)
#print(answer)
#print(revers)



print(flip_num)












##############################################











def power(n,p):
    if p==0:
        return 1
    power_p_div_by_2=power(n,p//2)
    if p%2:
        return n*power_p_div_by_2*power_div_by_2
    else:
        return power_p_div_by_2*power_div_by_2

def solution(n):
    answer = 0
    base=''
    while n//3>0:
        remain=n%3
        base=str(remain)+base
        n//=3
        if n<3:
            base=str(n)+base
    
    revers=base[::-1]
    place=len(revers)-1
    
    for i in revers:
        answer=power(int(i)*3,place)
        place-=1
        
    return answer
