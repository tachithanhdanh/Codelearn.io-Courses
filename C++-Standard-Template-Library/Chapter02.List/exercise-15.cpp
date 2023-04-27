list<int> changeValue(list<int> l, int first, int last) {
	//list<int>::iterator quá dài dòng
    auto it1=l.begin(); advance(it1,--first);
    auto it2=l.begin(); advance(it2,last);
    //dùng auto sẽ tiết kiệm time hơn việc ghi list<int>::iterator
    l.erase(it1,it2); return l;
}

std::vector<int> verifyFunction(std::vector<int> v, int first, int last)
{   
    list<int> l(v.begin(), v.end());
    l = changeValue(l, first, last);
    vector<int> vec(l.begin(), l.end());
	return vec;
}
