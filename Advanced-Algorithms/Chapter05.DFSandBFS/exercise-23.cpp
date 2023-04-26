const int maxN=10;
vector<int> adj[maxN]; vector<int> path; int ans; bool visited[maxN];

void dfs(int &u,int &v){
	if (path.back()==v){
		ans=max(ans,(int)path.size()-1);
	}
	for (int node : adj[u]){
		if (!visited[node]){
			visited[node]=true;
			path.push_back(node);
			dfs(node,v);
			path.pop_back();
			visited[node]=false;
		}
	}
}

int longestPath(int n, std::vector<std::vector<int>> edges, int u, int v)
{
    for (auto edge : edges){
		adj[edge[0]].push_back(edge[1]);
	}
	path.push_back(u); visited[u]=true;
    dfs(u,v);
    return (ans==0 ? -1 : ans);
}
