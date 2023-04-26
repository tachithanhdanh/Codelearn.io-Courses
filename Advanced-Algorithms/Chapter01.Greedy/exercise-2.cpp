using ll = long long;

//vectors
using vi = vector<int>;
#define all(x) begin(x), end(x)
#define sz(x) int((x).size())
#define pb push_back

//pairs
using pi = pair<int,int>;
#define f first
#define s second
#define mp make_pair

//Set min-max value.
template<class T> bool ckmin(T& a, const T& b) { return b < a ? a = b, 1 : 0; } // set a = min(a,b)
template<class T> bool ckmax(T& a, const T& b) { return b > a ? a = b, 1 : 0; } // set a = max(a,b)

int mettingRoom(vi s, vi e)
{
    vector<pi> T(sz(s));
    for (int i = 0; i < sz(T); ++i) {
        T[i].f = s[i];
        T[i].s = e[i];
    }
    sort(all(T),[](const pi& a, const pi& b){
        if (a.s == b.s) return a.f <= b.f;
        return a.s < b.s;
    });
    vector<vi> dp(2,vi(sz(T)+1));
    dp[1][1] = 1;
    for (int i = 2; i <= sz(T); ++i) {
        dp[0][i] = max(dp[1][i-1],dp[0][i-1]);
        for (int j = i-1; j > 0; --j) 
            if (T[j-1].s <= T[i-1].f) 
                ckmax(dp[1][i],dp[1][j]+1);
    }
    return max(dp[0][sz(T)],dp[1][sz(T)]);
}
