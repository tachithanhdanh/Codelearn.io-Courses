std::vector<int> removeElements(std::vector<int> arr, int k)
{
    stack<int> a,b; int cnt=0;
    for (int i=arr.size()-1;i>-1;--i){
        a.push(arr[i]);
    }
    while(a.size()){
        b.push(a.top());
        a.pop();
        if (a.empty()||b.empty()) break;
        while(cnt!=k&&a.top()>b.top()){
            ++cnt;
            b.pop();
            if (a.empty()||b.empty()) break;
        }
    }
    vector<int> ans(b.size());
    for (int i=ans.size()-1;i>-1;--i){
        ans[i]=b.top();
        b.pop();
    }
    return ans;
}
