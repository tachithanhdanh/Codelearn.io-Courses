int differentSymbolsNaive(string s)
{
    bool check[26]; int ans=0;
    for (int i=0;i<26;++i) check[i]=false;
    for (int i=0;i<s.size();++i) {
        check[s[i]-'a']=true;
    }
    for (int i=0;i<26;++i) if (check[i]) ++ans;
    return ans;
}
