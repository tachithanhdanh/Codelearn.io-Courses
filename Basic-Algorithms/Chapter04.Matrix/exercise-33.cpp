int x,y,n,m; bool topp,bottomm,rightt,leftt;
bool dfs(int node, vector<vector<int>> a, int i , int j){
    if (node==n*m) return true;
    topp= i==0; bottomm= i==n-1;
    leftt= j==0; rightt= j==m-1;
    ++node;
    if (!topp && a[i-1][j]==node) return dfs(node,a,i-1,j); 
    else if (!bottomm && a[i+1][j]==node) return dfs(node,a,i+1,j);
    else if (!rightt && a[i][j+1]==node) return dfs(node,a,i,j+1);
    else if (!leftt && a[i][j-1]==node) return dfs(node,a,i,j-1);
    else return false;
}

bool findPath(std::vector<std::vector<int>> matrix)
{   n=matrix.size(); m=matrix[0].size();
    for (int i=0;i<matrix.size();++i){
        bool flag=false;
        for (int j=0;j<matrix[i].size();++j){
            if (matrix[i][j]==1){
                x=i; y=j; flag=true;
            }
            if (flag) break;
        }
        if (flag) break;
    }
    return dfs(1,matrix,x,y);
}
