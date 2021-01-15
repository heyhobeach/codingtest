

n=4
answer=[]
answer2=[]
answer3=[]
s="a B z"

for i in range(len(s)):
    if s[i]==" ":
        answer3.append(ord(" "))
    else:
        if ord(s[i])>=65 and ord(s[i])<=90:
            if ord(s[i])+n>=65 and ord(s[i])+n<=90:
                answer3.append(ord(s[i])+n)
            else:
                answer3.append(ord(s[i])+n-26)
        else:
            if ord(s[i]) + n >= 97 and ord(s[i]) + n <= 122:
                answer3.append(ord(s[i]) + n)
            else:
                answer3.append(ord(s[i]) + n - 26)


print(s)
for i in range(len(s)):
    if s[i]==" ":
        print("space")
    else:
        print(s[i])
#print(b)
#print(answer)
#print("".join(answer2))
#print(answer2)
print(answer3)
for i in range(len(answer3)):
    answer3[i]=chr(answer3[i])
print("".join(answer3))




################################################################################################
def solution(s, n):
    answer = []
    for i in range(len(s)):
        if s[i]==" ":
            answer.append(ord(" "))
        else:
            if ord(s[i])>=65 and ord(s[i])<=90:
                if ord(s[i])+n>=65 and ord(s[i])+n<=90:
                    answer.append(ord(s[i])+n)
                else:
                    answer.append(ord(s[i])+n-26)
            else:
                if ord(s[i]) + n >= 97 and ord(s[i]) + n <= 122:
                    answer.append(ord(s[i])+n)
                else:
                    answer.append(ord(s[i])+n-26)
    for i in range(len(answer)):
        answer[i]=chr(answer[i])
    return "".join(answer)
