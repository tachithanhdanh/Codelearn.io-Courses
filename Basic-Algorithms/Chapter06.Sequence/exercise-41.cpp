std::vector<int> alternatingSums(std::vector<int> a)
{
    int sum1=0,sum2=0;
    for (int i=0;i<a.size();++i) {
        if (i&1) sum2+=a[i];
        else sum1+=a[i];
    }
    vector<int> ans={sum1,sum2};
    return ans;
}
