#1번


def solution(participant, completion):
    answer = ''
    participant.sort()
    completion.sort()
    for i in range(0,len(completion)):
        if participant[i]!=completion[i]:
            answer=participant[i]
            break
    if answer=='':
        answer=participant[len(completion)]
            
    return answer
    
    
    #######################################
    
    #2번
    def solution(particion, competion):
      answer=''
      for i in completion:
        participant.remove(i)
       answer=participant[0]
       return answer
       
  #################################################
  
  #3번
  
  
  def solution(participant, completion):
    answer = ''
    temp = 0
    dic = {}
    for part in participant:
        dic[hash(part)] = part
        temp += int(hash(part))
    for com in completion:
        temp -= hash(com)
    answer = dic[temp]

    return answer
