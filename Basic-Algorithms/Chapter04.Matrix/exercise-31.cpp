std::vector<std::vector<int>> spiralNumbers(int n)
{
    vector<vector<int>> a;
	a.resize(n);
	for (int i=0;i<n;++i) a[i].resize(n);
    int k,l,r;
	k=l=0; r=n-1;
	while (k<n*n){
		if (k<n*n) {
			for (int i=l;i<=r;++i){
				++k;
				a[l][i]=k;
			}
		}
		if (k<n*n) {
			for (int i=l+1;i<=r;++i){
				++k;
				a[i][r]=k;
			}
		}
		if (k<n*n) {
			for (int i=r-1;i>=l;--i){
				++k;
				a[r][i]=k;
			}
		}
		if (k<n*n) {
			for (int i=r-1;i>l;--i){
				++k;
				a[i][l]=k;
			}
		}
		++l; --r;
	}
    return a;
}
