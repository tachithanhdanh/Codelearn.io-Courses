std::vector<string> sortByLength(std::vector<string> s)
{   bool flag=false;
    for (int i=0;i<s.size();++i){
        flag=true;
        for (int j=1;j<s.size();++j){
            if (s[j].size()<s[j-1].size()) {
                swap(s[j],s[j-1]);
                flag=false;
            }
        }
        if (flag) break;
    }
    return s;
}
