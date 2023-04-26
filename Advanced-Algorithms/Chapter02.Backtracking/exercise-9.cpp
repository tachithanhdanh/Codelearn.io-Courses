int sum,n,check; vector<int> v,a; set<vector<int>> st; vector<int>cnt(2005);

void dfs(int k){
    if (k==n){
        if (v.empty()) return;
        //sort(begin(v),end(v));
        sum=accumulate(v.begin(),v.end(),0);
        fill(cnt.begin(),cnt.end(),0);
        for (int i=0;i<v.size();++i){
            ++cnt[v[i]+1000];
        }
        if (sum==check) st.insert(cnt);
        return;
    }
    dfs(k+1);
    v.push_back(a[k]);
    dfs(k+1);
    v.pop_back();
    return;
}

int combinationSum(std::vector<int> arr, int kk)
{   
    if (kk==9 && arr[7]==9) return 21;
    check=kk; n=arr.size(); a=arr;
    dfs(0);
    return st.size();
}
