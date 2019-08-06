from collections import defaultdict

def add_edge(u,v):
	adj[u].append(v)
	adj[v].append(u)

def dfs(s):
	if visited[s]:
		return
	else:
		visited[s]=True
		for u in adj[s]:
			if visited[u]==False:
				distance[u]=distance[s]
				print(u,end=" ")
			dfs(u)
			

N,M=map(int,input().split())
adj=defaultdict(list)
visited=[False]*(N+1)
distance=[-1]*(N+1)
for _ in range(M):
	u,v=map(int,input().split())
	add_edge(u,v)
distance[1]=0
print(1,end=" ")
dfs(1)							