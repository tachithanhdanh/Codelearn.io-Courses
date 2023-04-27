int cnt1[56],cnt2[56],ans;
int commonCharacterCount(string s1, string s2)
{   
    for (char ch : s1 ) {
        if (ch>='A' && ch<='Z') ++cnt1[ch-'A'];
        else ++cnt1[ch-'a'+26];
    }
    for (char ch : s2 ) {
        if (ch>='A' && ch<='Z') ++cnt2[ch-'A'];
        else ++cnt2[ch-'a'+26];
    }
    for (int i=0;i<56;++i) {
        ans+=min(cnt1[i],cnt2[i]);
    }
    return ans;
}
