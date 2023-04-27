vector<int> firstNegative(vector<int> a, int k)
{
    queue<int> qu; vector<int> ans;
    for (int i=0;i<k-1;++i){
        if (a[i]<0) qu.push(i);
    }
    for (int i=k-1;i<a.size();++i){
        if (a[i]<0) qu.push(i);
        while (!qu.empty() && qu.front()<i-k+1) qu.pop();
        ans.push_back((qu.empty() ? 0 : a[qu.front()]));
    }
    return ans;
}
