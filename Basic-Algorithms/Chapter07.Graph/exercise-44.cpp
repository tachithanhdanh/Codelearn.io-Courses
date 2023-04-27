bool isTournament(int n, std::vector<int> fromV, std::vector<int> toV)
{
    vector<int> check[2];
    check[0].resize(n+1,0); check[1]=check[0];
    for (int i=0;i<(int)fromV.size();++i){
        ++check[0][fromV[i]];
        ++check[1][toV[i]];
    }
    for (int i=1;i<=n;++i){
        if (check[0][i]+check[1][i]!=n-1) return false;
    }
    return true;
}
