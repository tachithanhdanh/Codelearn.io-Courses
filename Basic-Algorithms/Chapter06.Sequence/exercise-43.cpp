int longestSequence(std::vector<int> a)
{   
    int ans=0; vector<int> v;
    for (int i=0;i<a.size();++i){
        for (int j=i+1;j<a.size();++j){
            v.clear();
            v.push_back(a[i]); v.push_back(a[j]);
            const int diff=v[1]-v[0];
            for (int k=j+1;k<a.size();++k){
                if (a[k]-v.back()==diff){
                    v.push_back(a[k]);
                }
                else continue;
            }
            ans=max(ans,(int)v.size());
        }
    }
    return ans;
}
