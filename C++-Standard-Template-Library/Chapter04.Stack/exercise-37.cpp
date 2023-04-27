std::string stackBin(int n)
{
    string s;
    stack<char> st;
    while (n){
        st.push((n&1)+48);
        n/=2;
    }
    while(!st.empty()){
        s+=st.top();
        st.pop();
    }
    return s;
}
