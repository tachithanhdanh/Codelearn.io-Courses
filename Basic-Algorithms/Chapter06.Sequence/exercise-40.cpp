std::vector<int> prefixSums(std::vector<int> a)
{
    vector<int> ans(a.size());
    ans[0]=a[0];
    for (int i=1;i<a.size();++i) ans[i]=ans[i-1]+a[i];
    return ans;
}
