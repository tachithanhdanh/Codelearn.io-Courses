string amendTheSentence(string s)
{   string ans;
    for(int i=0;i<s.size();++i){
        if (s[i]>='A'&& s[i]<='Z') {
            if (i) ans+=' ';
            ans+=(s[i]+32);
        }
        else ans+=s[i];
    }
    return ans;
}
