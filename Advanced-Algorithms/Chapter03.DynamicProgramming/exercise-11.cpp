using ll = long long; 
const ll mod = 1e9+7;

ll fibLikeSq(ll n)
{
    ll *ans = new ll[1000001];
    ans[0]=0; ans[1]=1; ans[2]=1; ans[3]=2;
    for (int i=4;i<1000001;++i){
        ans[i]=(((ans[i-1]%mod)*(ans[i-2]%mod))%mod+ans[i-3]%mod)%mod;
    }
    return ans[n];
}
