
def dfs(g,v,visited) :
  visited[v] = True
  print(v, end =' ')

  for i in graph[v]:
    if not visited[i] :
        dfs(g, i, visited)

from collections import deque
def bfs(g, start, visited):

  queue = deque([start])
  visited[start] = True

  while queue:
    v = queue.popleft()
    print(v,end =' ')

    for i in graph[v]:
      if not visited[i]:
        queue.append(i)
        visited[i] = True



n,m,v = map(int, input().split())
graph = [[] for _ in range(n+1)]

for i in range(m):
    a,b = map(int,input().split())
    graph[a].append(b)
    graph[b].append(a)
    graph[a].sort()
    graph[b].sort()



visited = [False] * (n+1)
dfs(graph, v, visited)

print("")

visited = [False] * (n+1)
bfs(graph, v, visited)
