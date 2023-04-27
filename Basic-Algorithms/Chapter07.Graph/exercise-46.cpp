vector<int> dist; bool visited[15];
void bfs(int &node, vector<vector<bool>> &adj){
    visited[node]=true; 
    dist.resize(adj.size()); dist[node]=0;
    queue<int> qu; qu.push(node);
    while (!qu.empty()){
        int u = qu.front();
        qu.pop(); 
        for (int v=0;v<adj[0].size();++v){
            if (visited[v]==false && adj[u][v]==true){
                dist[v]=dist[u]+1;
                qu.push(v); visited[v]=true;
            }
        }
    }
}

std::vector<int> bfsDistancesUnweightedGraph(std::vector<std::vector<bool>> matrix, int startVertex)
{
    bfs(startVertex,matrix);
    return dist;
}
