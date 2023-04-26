vector<int> adj[5001]; bool visited[5001];
bool dfs(int u,int v){
    visited[u]=true;
    stack<int> st; st.push(u);
    while (!st.empty()){
        int node = st.top(); st.pop();
        for (int a : adj[node]){
            if (!visited[a]){
                visited[a]=true;
                st.push(a);
            }
            else if (a==v) return true;
        }
    }
    return visited[v];
}

bool findPath(int n, std::vector<std::vector<int>> edges, int u, int v)
{
    for (vector<int> edge : edges){
        adj[edge[0]].push_back(edge[1]);
    }
    return dfs(u,v);
}
