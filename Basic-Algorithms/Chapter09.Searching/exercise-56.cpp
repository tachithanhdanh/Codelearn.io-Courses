bool checka[100001],checkb[100001];
std::vector<int> missingValue(std::vector<int> a, std::vector<int> b)
{   vector<int> ans;
    for (int i=0;i<a.size();++i) checka[a[i]]=true;
    for (int i=0;i<b.size();++i) checkb[b[i]]=true;
    for (int i=0;i<100001;++i) {
        if (!checka[i] && checkb[i]) ans.push_back(i);
    }
    return ans;
}
