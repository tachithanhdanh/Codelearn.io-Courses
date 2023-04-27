int differentNumbers(vector<int> inputVector )
{
	set<int> s;
	for (int i=0;i<inputVector.size();++i){
		s.insert(inputVector[i]);
	}
	return s.size();
}
