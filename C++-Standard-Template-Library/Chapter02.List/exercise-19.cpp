list<int> removeElements(list<int> linkedList, int n) {
    for (auto it=linkedList.begin();it!=linkedList.end();++it){
        if(*it>=n) {
            it=linkedList.erase(it);--it;
        }
    }
    return linkedList;
}

vector<int> verifyFunction(vector<int> v, int n) {
	list<int> l(v.begin(), v.end());
    l = removeElements(l, n);
    vector<int> vec(l.begin(), l.end());
	return vec;
}
