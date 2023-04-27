int differentSubstringsTrie(string s)
{   set<string> ss;
    for (int i=0;i<s.size();++i) {
        for (int j=1;j<s.size()-i+1;++j) {
            ss.insert(s.substr(i,j));
        }
    }
    return ss.size();
}
