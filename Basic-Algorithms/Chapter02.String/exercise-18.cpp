string lineEncoding(string s)
{
    char ch=s.front(); int cnt=1;
    string ans;
    for (int i=1;i<s.size();++i) {
        if (s[i]==ch) ++cnt;
        else {
            if (cnt>1) ans+=to_string(cnt); ans+=ch;
            cnt=1; ch=s[i];
        }
    }
    if (cnt>1) ans+=to_string(cnt); ans+=ch;
    return ans;
}
