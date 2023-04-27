string diversity(string str, int k){
	if(str.length()<k) return "impossible";
	else if(k>26) return "impossible";
	else {
		set<char> s;
		for(int i=0;i<str.size();++i) {
			s.insert(str[i]);
		}
		if (k-s.size()<0) return "0";
		return to_string(k-s.size());
	}
	
}
