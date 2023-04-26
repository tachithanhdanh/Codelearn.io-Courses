bool apples[205][205]; int cnt,n,m,rotten,num,i,j; bool t,b,r,l;

void dfs(vector<vector<int>> &pos){
    queue<pair<int,int>> qu;
    for (vector<int> v : pos){
        apples[v[0]][v[1]]=true;
        qu.push(make_pair(v[0],v[1]));
        ++rotten;
    }
    if (rotten==n*m) return;
    while (rotten!=n*m){
        ++cnt; num=qu.size();
        while (num--){
            //pair<int,int> p=qu.front();
            i=qu.front().first;
            j=qu.front().second;
            qu.pop();
            t=i==0; b=i==n-1; l=j==0; r=j==m-1;
            if (!t && !apples[i-1][j]) {
                ++rotten; apples[i-1][j]=true;
                qu.push(make_pair(i-1,j));
            }
            if (!b && !apples[i+1][j]) {
                ++rotten; apples[i+1][j]=true;
                qu.push(make_pair(i+1,j));
            }
            if (!l && !apples[i][j-1]) {
                ++rotten; apples[i][j-1]=true;
                qu.push(make_pair(i,j-1));
            }
            if (!r && !apples[i][j+1]) {
                ++rotten; apples[i][j+1]=true;
                qu.push(make_pair(i,j+1));
            }
        }
    }
}

int rotAllApple(int nn, int mm, std::vector<std::vector<int>> pos)
{   
    for (vector<int> &v : pos){
        --v[0]; --v[1];
    }
    n=nn; m=mm;
    dfs(pos);
    return cnt;
}
