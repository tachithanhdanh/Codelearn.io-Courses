std::vector<int> vectorErase(std::vector<int> v, int k)
{
    v.erase(v.end()-k,v.end()); return v;
}
