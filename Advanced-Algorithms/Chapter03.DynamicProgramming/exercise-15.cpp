#define sz(x) int((x).size())
#define all(x) (x).begin(), (x).end()
#define pb push_back
using vi = vector<int>;
template<typename T> bool ckmax(T& a, const T& b) { return ( b > a ? a = b, 1: 0 ); }

int lDS2(vi a) {
    vi dp;
    reverse(all(a));
    for (int& i : a) {
        int pos = lower_bound(all(dp),i) - dp.begin();
        if (pos == sz(dp)) dp.pb(i);
        else dp[pos] = i;
    }
    return sz(dp);
}
