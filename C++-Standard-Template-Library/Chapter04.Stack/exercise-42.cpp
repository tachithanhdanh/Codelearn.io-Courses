string encodeString(string s)
{   int cnt=0; char a;
    stack<char> st;
    while(!s.empty()){
        st.push(s[s.size()-1]);
        s.pop_back();
    } 
    while(!st.empty()){
        cnt=0;
        a=st.top();
        while(a==st.top()){
            ++cnt; st.pop();
            if (st.empty()) break;
        }
        s+=a; s+=(to_string(cnt));
    }
    return s;
}
