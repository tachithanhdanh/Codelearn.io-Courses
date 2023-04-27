int sumOfFirstAndLastElement(list<int> linkedList)
{	if(linkedList.empty()) return -1;
	else if(linkedList.size()==1) return linkedList.front();
    else return linkedList.front()+linkedList.back();
}

int verifyFunction(vector<int> v)
{
	list<int> l(v.begin(), v.end());
	return sumOfFirstAndLastElement(l);
}
