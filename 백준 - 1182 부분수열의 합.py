def dfs(i, SUM):
  global cnt
  if i >= N:
      return
  SUM += n_list[i]
  if SUM == S :
    cnt += 1
  dfs(i+1, SUM-n_list[i])
  dfs(i+1, SUM)


N,S = map(int, input().split())
n_list = list(map(int, input().split()))
cnt = 0
dfs(0,0) #index 번호도 처음은 0이고, 처음 더한 값도 0이기 때문
print(cnt)
