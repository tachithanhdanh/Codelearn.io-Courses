string reverseString(string s)
{
    string res;
    stack<char> st;
    for (auto i: s){
        st.push(i);
    }
    while(st.empty() == false){
        res+=st.top(); st.pop();
    }
    return res;
}
