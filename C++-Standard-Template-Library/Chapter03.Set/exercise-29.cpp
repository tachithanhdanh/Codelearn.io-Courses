int vectorBeautifull(std::vector<int> v)
{
    set<int> a(v.begin(),v.end());
    return (int)v.size()-a.size();
}
