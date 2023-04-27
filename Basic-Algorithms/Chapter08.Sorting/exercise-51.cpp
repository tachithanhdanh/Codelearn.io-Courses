int sum(int n){
    int ans=0;
    while (n){
        ans+=n%10;
        n/=10;
    }
    return ans;
}
vector<int> digitalSumSort(vector<int> a)
{
    vector<vector<int>> b(28);
    for (int i=0;i<a.size();++i){
        b[sum(a[i])].push_back(a[i]);
    }
    for (int i=0;i<28;++i){
        sort(b[i].begin(),b[i].end());
    }
    a.clear();
    for (int i=0;i<28;++i){
        for (int j=0;j<b[i].size();++j){
            a.push_back(b[i][j]);
        }
    }
    return a;
}
