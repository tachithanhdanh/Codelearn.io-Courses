vector<bool> cnt(1e7+1); int res;
int searchElement02(std::vector<std::vector<int>> a, int k)
{   
    for (int i=0;i<a.size();++i){
        for (int j=0;j<a[i].size();++j){
            cnt[a[i][j]]=true;
        }
    }
    for (int i=0;i<=(int)1e7;++i){
        if (cnt[i]) ++res;
        if (res==k) return i;
    }
    return -1;
}
