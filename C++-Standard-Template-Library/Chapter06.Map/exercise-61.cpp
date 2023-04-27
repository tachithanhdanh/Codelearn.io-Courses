vector<int> mergeProducts(vector<string> A, vector<string> B){
    set<string> st; vector<int> ans((int)B.size());
    for (const string &s : A) st.insert(s);
    for (int i=0;i<B.size();++i){
        ans[i]=!st.count(B[i]);
        st.insert(B[i]);
    }
    return ans;
}
