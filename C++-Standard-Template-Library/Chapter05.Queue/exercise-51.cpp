#define mp make_pair
#define f first
#define s second
#define pb push_back
#define ft front()
#define bk back()

int bfs(vector<vector<int>> &adj){
    vector<pair<int,int>> pos;
    int oranges=0;
    for (int i=0;i<adj.size();++i){
        for (int j=0;j<adj[i].size();++j){
            if (adj[i][j]) ++oranges;
            if (adj[i][j]==2){
                pos.pb(mp(i,j));
            }
        }
    }
    queue<pair<int,int>> qu; int rotten=0,cnt=0,num=0,i,j; bool t,l,r,b;
    for (pair<int,int> &p : pos){
        qu.push(p); ++rotten;
    }
    if (rotten==3*5) return 0;
    while(!qu.empty() && rotten!=oranges){
        ++cnt; num=qu.size();
        while (num--){
            //pair<int,int> p=qu.front();
            i=qu.ft.f;
            j=qu.ft.s;
            qu.pop();
            t=i==0; b=i==adj.size()-1; l=j==0; r=j==adj[0].size()-1;
            if (!t && adj[i-1][j]==1) {
                ++rotten; 
                adj[i-1][j]=2;
                qu.push(mp(i-1,j));
            }
            if (!b && adj[i+1][j]==1) {
                ++rotten; 
                adj[i+1][j]=2;
                qu.push(mp(i+1,j));
            }
            if (!l && adj[i][j-1]==1) {
                ++rotten; 
                adj[i][j-1]=2;
                qu.push(mp(i,j-1));
            }
            if (!r && adj[i][j+1]==1) {
                ++rotten; 
                adj[i][j+1]=2;
                qu.push(mp(i,j+1));
            }
        }
    }
    /*
    for (int i=0;i<3;++i){
        for (int j=0;j<5;++j){
            if (adj[i][j]==2) ++rotten;
        }
    }
    */
    return (rotten ==oranges ? cnt : -1);
}

int rotOrange(std::vector<std::vector<int>> matrix)
{
    return bfs(matrix);
}
