class stack:
    def __init__(self):
        self.top=[]
    def __len__(self):
        return len(self.top)
    def __str__(self):
        return str(self.top[::1])
    def push(self,item):
        self.top.append(item)

    def pop(self):
        if not self.isEmpty():
            return self.top.pop()
    def isEmpty(self):
        return len(self.top)==0
    def peek(self):
        if not self.isEmpty():
            return self.top[-1]



def solution(board, moves):
    s=stack()
    max_range=int(len(board))
    answer = 0
    for move in moves:
        col=0
        while board[col][move-1]==0:
            if col>max_range:
                col=0
                break
            elif col+1==max_range:
                break
            else:
                col+=1
        pre=s.peek()
        if board[col][move-1]==0:
            continue
        s.push(board[col][move-1])
        board[col][move-1]=0
        now=s.peek()
        if pre==now:
            s.pop()
            s.pop()
            answer+=2
    return answer
