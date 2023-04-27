int sumOfVectorElementsUsingIterator(vector<int> v)
{
	int res = 0;
	for (auto it = v.begin(); it != v.end(); ++it)
		res += *it;
	
	return res;
}
