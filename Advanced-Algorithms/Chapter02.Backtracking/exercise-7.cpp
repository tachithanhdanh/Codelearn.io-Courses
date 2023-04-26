bool check[7]; int cnt; vector<int> ans;
void backtrack(vector<int> &a,int n,int k,int i){
    for (int j=1;j<=n;++j){
        if (check[j]){
            a[i]=j; check[j]=false;
            if (i==n-1) {
                ++cnt;
                if (cnt==k) {
                    for (int i=0;i<n;++i) ans.push_back(a[i]);
                    return;
            }}
            backtrack(a,n,k,i+1);
            check[j]=true;
        }
    }
}

vector<int> nthPermutation(int n, int k)
{
    vector <int> a(n); 
    for (int i=0;i<=6;++i) check[i]=true;
    backtrack(a,n,k,0);
    return ans;
}
