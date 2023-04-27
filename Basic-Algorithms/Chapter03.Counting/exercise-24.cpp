int cnt[26];
bool charactersRearrangement(string s1, string s2)
{
    if (s1.size()!=s2.size()) return false;
    else {
        for (int i=0;i<s1.size();++i) {
            ++cnt[s1[i]-'a']; --cnt[s2[i]-'a'];
        }
        for (int i=0;i<26;++i) if (cnt[i]) return false;
        return true;
    }
}
