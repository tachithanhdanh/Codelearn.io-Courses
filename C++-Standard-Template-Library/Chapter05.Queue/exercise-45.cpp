std::vector<int> transformArray(std::vector<int> arr, int k)
{
    vector<int> v;
    queue<int> q;
    for (int i = 0; i < arr.size(); i++){
        q.push(arr[i]);
    }
    for (int i=0;i<k;++i){
        int n=q.front(); q.pop(); q.push(n);
    }
    while (!q.empty()){
        v.push_back(q.front());
        q.pop();
    }
    return v;
}
