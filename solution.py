def solution(n):
    answer = []
    count=1
    col=-1
    row=0
    flag=1
    a_list=[0 for i in range(n)for j in range(n)]
    temp_list=[]
    while n>0:
        for i in range(n):
            col+=flag
            a_list[col][row]=count
            count+=1
        n-=1
        for j in range(n):
            row+=flag
            a_list[col][row]=count
            count+=1
        flag*=-1
        n-=1
        for k in range(n):
            col+=flag
            row+=flag
            a_list[col][row]=count
            count+=1
        flag*=-1
        n-=1
    for i in a_list:
        temp_list+=i
    for i in range(len(temp_list)):
        if temp_list[i]!=0:
            answer.append(temp_list[i])
    return answer