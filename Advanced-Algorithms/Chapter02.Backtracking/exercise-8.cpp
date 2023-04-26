string s,c; set<string> st; int n;

void dfs(int k,int i){
    if (k==n+1){
        st.insert(s);
        return;
    }
    s.insert(k+i,c);
    dfs(k+1,i+1);
    s.erase(k+i,1); 
    dfs(k+1,i);
}

int numberOfDistinctString(string a, string b)
{
    s=a; c=b;
    n=s.size();
    dfs(0,0);
    return st.size();
}
