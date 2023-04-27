std::vector<int> stickSpan(std::vector<int> arr)
{
    vector<int> ans; ans.push_back(1);
    stack<int> st; st.push(0);
    for (int i=1;i<arr.size();++i){
        while (!st.empty() && arr[st.top()]<=arr[i]) st.pop();
        ans.push_back((st.empty() ? i+1 : i-st.top()));
        st.push(i);
    }
    return ans;
}
