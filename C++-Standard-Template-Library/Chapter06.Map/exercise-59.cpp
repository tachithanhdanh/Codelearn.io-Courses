int largestElement(std::vector<int> arr)
{
    int ans=INT_MAX,mx=INT_MIN;
    map<int,int> mp;
    for (const int &i : arr) ++mp[i];
    for (pair<int,int> p : mp){
        ans=min(ans,p.second);
    }
    for (pair<int,int> p: mp){
        if (p.second==ans) mx=max(p.first,mx);
    }
    return mx;
}
