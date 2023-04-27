list<int> initList(int n)
{
	list<int> res;
	for (int i = n; i >= 1; --i) {
		res.push_front(i);
	}
	return res;
}


vector<int> verifyFunction(int n)
{
	list<int> l = initList(n);
	vector<int> vec(l.begin(), l.end());
	return vec;
}
