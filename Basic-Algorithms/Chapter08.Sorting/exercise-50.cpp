int cnt[1001],ans;
bool areSimilar(std::vector<int> a, std::vector<int> b)
{
    if (a.size()!=b.size()) return false;
    else {
        for (int i=0;i<a.size();++i) {
            ++cnt[a[i]]; --cnt[b[i]];
        }
        for (int i=0;i<1001;++i) if (cnt[i]) return false;
        for (int i=0;i<a.size();++i) {
            if (a[i]!=b[i]) ++ans;
        }
        if (ans==2 || ans==0) return true;
        else return false;
    }
}
