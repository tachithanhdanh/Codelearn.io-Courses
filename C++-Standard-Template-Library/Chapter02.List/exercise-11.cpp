list<int> initList(int n){
	list<int> ans;
	for(int i=1;i<=n;++i){
		ans.push_back(i);
	}	return ans;
}

vector<int> verifyFunction(int n)
{
	list<int> lst = initList(n);
	vector<int> res(lst.begin(), lst.end());
	return res;
}
