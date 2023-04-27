bool setFind(std::vector<int> arr, int k)
{
    std::set<int> s(arr.begin(), arr.end());
    return s.count(k); 
}
