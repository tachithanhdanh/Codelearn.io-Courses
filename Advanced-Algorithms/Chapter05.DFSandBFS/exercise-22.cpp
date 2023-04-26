vector<int> adj[5005]; bool visited[5005]; 

int dfs(int node){
    int visits=0;
    memset(visited,false,sizeof(visited));
    visited[node]=true; ++visits;
    stack<int> st; st.push(node);
    while (!st.empty()){
        int u = st.top(); st.pop();
        for (int v : adj[u]){
            if (!visited[v]){
                visited[v]=true; ++visits;
                st.push(v);
            }
        }
    }
    return visits;
}

int beautifulVertex(int n, std::vector<std::vector<int>> edges)
{   
    for (vector<int> edge : edges){
        adj[edge[0]].push_back(edge[1]);
        //adj[edge[1]].push_back(edge[0]);
    }
    for (int i=1;i<=n;++i){
        if (dfs(i)==n) return i;
    }
}
