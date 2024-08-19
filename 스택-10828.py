# 몇개를 조절할지 정수 입력받기
# push일 경우 스택에 넣을 단어 + 띄어쓰기 + 숫자 
# 안에 push라는 단어가 있을 경우 띄어쓰기 뒤의 숫자를 stack 에 넣기
# 명령어 입력 후 바로 출력문 나오도록 설정

import sys
num = int(sys.stdin.readline())

stack = []
for i in  range(num):
    type = sys.stdin.readline().split()
    if type[0] == "push":
       stack.append(type[1])
    elif type[0] == "pop":
        if len(stack) > 0: 
            print(stack.pop()) 
        else: print(-1)
    elif type[0] == "size":
        print(len(stack))
    elif type[0] == "empty":
        if len(stack) > 0: print(0)
        else: print(1)
    elif type[0] == "top": 
        if len(stack) > 0: print(stack[-1])
        else: print(-1)  
