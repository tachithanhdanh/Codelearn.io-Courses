using vi = vector<int>;
#define pb push_back
#define sz(x) int((x).size())

vi checkActivity(int n)
{
    bitset<32> a(n);
    vi ans;
    int k;
    for (k = sz(a)-1; k >= 0; --k)
        if (a[k]) break;
    for (int i = 0 ; i <= k; ++i) ans.pb(a[i]);
    return ans;
}
