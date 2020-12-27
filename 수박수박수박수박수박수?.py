def solution(n):
    answer = "수박"
    answer*=n
    
    return answer[:n]
    
    
    #######################################
    
    
    
    n=8
a="수박"
watermellon="수박"*(n//2)+"수"*(n%2)
print(watermellon)
