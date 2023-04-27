bool comp(pair<char,int> p1,pair<char,int> p2){
    if (p1.second==p2.second && p1.first<p2.first) return true;
    if (p1.second==p2.second && p1.first>p2.first) return false;
    if (p1.second>p2.second) return true;
    if (p1.second<p2.second) return false;
}

string modifyString(string s){
    map<char, int> mp;
    for (const char &ch: s) ++mp[ch];
    vector<pair<char, int> > vt(mp.begin(), mp.end());
    s="";
    sort(vt.begin(),vt.end(),comp);
    for (pair<char,int> p: vt){
        s+=p.first;
    }
    return s;
}
