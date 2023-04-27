std::vector<string> countChar(string s)
{
    vector<string> ans;
    map<char,int> m;
    for (const char &ch : s){
        ++m[ch];
    }
    for (pair<int,int> p : m){
        string a;
        a+=p.first;
        a+=" ";
        a+=to_string(p.second);
        ans.push_back(a);
    }
    return ans;
}
