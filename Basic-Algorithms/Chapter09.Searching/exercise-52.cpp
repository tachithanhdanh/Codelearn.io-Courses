int searchElement(std::vector<int> a, int n)
{   int h=0;
    sort(a.rbegin(),a.rend());
    for (int i=1;i<a.size();++i) {
        if (a[i]!=a[i-1]) {
            ++h;
        }
        if (h==n) return a[i-1];
    }
    return -1;
}
