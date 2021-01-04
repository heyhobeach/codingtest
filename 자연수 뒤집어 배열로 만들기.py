n2=651346


def solution(n):
    answer = list(map(int,(str(n))))#map을 이용해서 자연수n을 문자열로 n을 만든것을 정수로 만들면서 리스트로 만듬
    return answer[::-1]#슬라이싱을 이용해 역순으로 배치
    
    
#print(list(map(str,sorted(reverse=True))))# 처음 시도했던것 틀렸던점 sorted하면 정렬되어서 문제에서 원하는것이 아님 저기서 역순만 가져와야했었음
    
#print(list(map(int,reversed(str(n2)))))# 다른사람 답
    
    #reverse와 reversed의 차이는 reverse는 list에서 제공하는 함수이기때문에 지금 코드상에서 예를들면 answer.reverse로 접근이 가능하고 
    #reversed는 내장함수로 list에서 제공하는것이 아니기때문에 reversed(n)으로 접근해야함
