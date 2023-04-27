int sumOfAllElements(list<int> &linkedList)
{	int sum=0;
	for (const auto &it : linkedList ){
		sum+=it;
	}	return sum;
}

int verifyFunction(vector<int> v)
{
	list<int> l(v.begin(), v.end());
	return sumOfAllElements(l);
}
