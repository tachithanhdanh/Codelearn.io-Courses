#define sz(x) int((x).size())
using vi = vector<int>;
template<typename T> bool ckmax(T& a, const T& b) { return ( b > a ? a = b, 1: 0 ); }

int lDS1(vi a) {
    vi dp(sz(a),1);
    int ans = 0;
    for (int i = 0; i < sz(a); ++i) {
        for (int j = 0; j < i; ++j) {
            if (a[j] > a[i]) ckmax(dp[i],dp[j]+1);
        }
        ckmax(ans,dp[i]);
    }
    return ans;
}
