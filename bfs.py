from collections import defaultdict, deque

M,N=map(int,input().split())
adj=defaultdict(list)

for i in range(N):
	u,v=map(int,input().split())
	adj[u].append(v)
	adj[v].append(u)

q=deque()
d=[-1]*(N+1)
visited=[False]*(N+1)
d[1]=0
q.append(1)
visited[1]=True

while(len(q)>0):
	parent=q.popleft()
	for child in adj[parent]:
		if visited[child]==False:
			q.append(child)
			visited[child]=True
			d[child]=d[parent]+1
for i in range(1,N+1):
	print(i,":",d[i])			