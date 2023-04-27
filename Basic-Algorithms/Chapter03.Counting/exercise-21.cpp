bool checkEqualFrequency(std::vector<int> a)
{   if (a.size()==1) return true;
    else if (a.size()==2) return true;
    sort(a.begin(),a.end());
    int b=1;
    for (int i=1;i<a.size();++i) {
        if (a[i]!=a[i-1]) break;
        else ++b;
    }
    if (b==a.size()) return true;
    int c=1;
    for (int i=b+1;i<a.size();++i) {
        if (a[i]==a[i-1]) ++c;
        else {
            if (b!=c) return false;
            else c=1;
        }
    }
    if (c!=b) return false;
    return true;
}
