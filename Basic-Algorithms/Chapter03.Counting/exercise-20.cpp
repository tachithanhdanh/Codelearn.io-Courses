const int mxN=400;
int cnt[mxN+1],ans;
int differentValuesInMultiplicationTable2(int n, int m)
{   
    for (int i=1;i<=n;++i)
        for (int j=1;j<=m;++j)
            ++cnt[i*j];
    for (auto i : cnt) if (i) ++ans;
    return ans;
}
