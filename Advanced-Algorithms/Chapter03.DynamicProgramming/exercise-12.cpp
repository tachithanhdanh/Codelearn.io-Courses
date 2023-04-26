#define sz(x) int((x).size())
#define all(x) begin(x), end(x)
int dp[(int)1e6+10];

int maximumNonAdj(vector<int> a)
{
    if (sz(a)==0) return 0;
    if (sz(a)==1) return a.front();
    dp[0] = -1e9;
    dp[1] = a.front();
    for (int i = 2; i <= sz(a); ++i) {
        dp[i] = max(dp[i-2]+a[i-1],max(a[i-1],dp[i-1]));
    }
    return dp[sz(a)];
}
