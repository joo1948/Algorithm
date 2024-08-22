n = int(input())

for _ in range(n) :
  text = input()
  stack = []
  for i in text:
    if i == '(' :
      stack.append("(")
    elif i == ')':
      if len(stack) == 0:
        stack.append(")")
        break
      else :
        stack.pop()

  if len(stack) == 0:
    print("YES")
  else :
    print("NO")
