
def solution(arr):
    a=[]
    a.append(arr[0])
    for i in range(1, len(arr)):
        if arr[i] == arr[i-1]: continue
        else : a.append(arr[i])
    return a




####################################

import copy
def solution(arr):
    answer =copy.deepcopy(arr)
    count=0
    for i in range(len(arr)-1):
        if arr[i]==arr[i+1]:
            del answer[count]
        elif arr[i]!=arr[i+1]:
            count+=1          
    return answer
    
    
    ###############################
    
    
import copy
arr=[1,1,3,3,0,1,1]
arr2=copy.deepcopy(arr)
answer =[]
count=0
print_arr=f'now arr ={arr}'


for i in range(len(arr)-1):
    print(print_arr)
    print_arr2=f'now arr2={arr2}'
    print(print_arr2)
    if arr[i]==arr[i+1]:
        del arr2[count]
        test_same = f'same count is {count} ,arr[{i}] is{arr[i]}, arr[{i + 1}] is{arr[i + 1]}, so i will del arr2[{count}] is {arr2[count]}'
        print(test_same)

    elif arr[i]!=arr[i+1]:
        test_not = f'different count is {count} ,arr[{i}] is{arr[i]}, arr[{i+1}] is{arr[i + 1]} i will pass num'
        print(test_not)
        count+=1
    print("")
#print(arr)
print(arr2)


print(answer)


###################################################




def no_continuous(s):
    a = []
    for i in s:
        if a[-1:] == [i]: continue
        a.append(i)
    return a

