std::vector<int> setFunction(std::vector<int> arr, int k)
{
    int m,n;
    std::set<int> s(arr.begin(), arr.end());
    set <int>:: iterator it;
    it=s.upper_bound(k); 
    m= (it==s.end() ? -1 : *it);
    it=s.lower_bound(k); 
    n=(it==s.end() ? -1 : *it);
    return {m,n};
}
