std::vector<int> messagesPhone(std::vector<int> a, int k)
{   bool *check=new bool[1000]; vector<int> ans;
    for (int i=0;i<1000;++i){
        check[i]=false;
    }
    queue<int> q; q.push(a[0]); check[a[0]]=true;
    for (int i=0;i<a.size();++i){
        if (!check[a[i]]){
            check[a[i]]=true;
            if (q.size()<k) q.push(a[i]);
            else {
                check[q.front()]=false;
                q.pop(); q.push(a[i]);
            }
        }
    }
    while(q.empty()==false){
        ans.push_back(q.front());
        q.pop();
    }
    return ans;
}
