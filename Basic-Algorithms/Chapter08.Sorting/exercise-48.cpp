int cnt[1001],j;
std::vector<int> sortByHeight(std::vector<int> a)
{
    for (int i=0;i<a.size();++i) {
        if (a[i]!=-1) ++cnt[a[i]];
    }
    for (int i=0;i<a.size();++i) {
        if (a[i]!=-1){
            while (!cnt[j]) ++j;
            if (cnt[j]) {
                a[i]=j; --cnt[j];
            }
        }
    }
    return a;
}
