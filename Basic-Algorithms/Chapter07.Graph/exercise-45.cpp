bool visited[11]; 
int bfs(int node, vector<vector<bool>> adj){
    if (adj.size()==0) return 0;
    else if (adj.size()==1) return 1;
    visited[node]=true;
    int visits=0; ++visits;
    queue<int> qu; qu.push(node);
    while (!qu.empty()){
        int u = qu.front();
        qu.pop();
        
        for (int v = 0 ; v<adj[0].size();++v){
            if (!visited[v] && adj[u][v]){
                visited[v]=true;
                qu.push(v); ++visits;
            }
        }
    }
    return visits;
}

int componentSize(std::vector<std::vector<bool>> matrix, int vertex)
{
    return bfs(vertex,matrix);
}
