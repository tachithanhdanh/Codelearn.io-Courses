vector<int> a,b,arr; int ans=INT_MIN,cur,n,sum1,sum2;

void dfs(int k){
    if (k==(int)arr.size()){
        sum1=sum2=0;
        if (a.empty() || b.empty()) return;
        for (int a1 : a){
            sum1+=a1;
        }
        for (int b1: b){
            sum2+=b1;
        }
        cur=sum1*sum2;
        ans=max(cur,ans);
        return;
    }
    a.push_back(arr[k]);
    dfs(k+1);
    a.pop_back();
    b.push_back(arr[k]);
    dfs(k+1);
    b.pop_back();
}

int maximalMultiple(std::vector<int> cc)
{
    arr=cc;
    dfs(0);
    return ans;
}
