vector<int> dist(5001); vector<int> adj[5001]; bool visited[5001];

void bfs(){
    visited[1]=true;
    dist[1]=0;
    queue<int> qu; qu.push(1);
    while (!qu.empty()){
        int node = qu.front();
        qu.pop();
        for (int u : adj[node]){
            if (!visited[u]){
                visited[u]=true;
                dist[u]=dist[node]+1; qu.push(u);
            }
        }
    }
    return;
}

std::vector<int> shortestPath(int n, std::vector<std::vector<int>> edges)
{
    dist.resize(n+1);
    for (vector<int> edge : edges){
        adj[edge[0]].push_back(edge[1]);
        adj[edge[1]].push_back(edge[0]);
    }
    bfs();
    dist.erase(dist.begin());
    return dist;
}
