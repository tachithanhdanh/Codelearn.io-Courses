int cyclicShift(string word){
	set<string> s;
	string a=word+word;
	for(int i=0;i<word.size();++i){
		s.insert(a.substr(i,word.size()));
	}
	return s.size();
}
