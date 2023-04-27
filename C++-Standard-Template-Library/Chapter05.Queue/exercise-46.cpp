vector<string> generateBinary(int n)
{	
    vector<string> res;
	queue<string>q;
	string s;
	bool b=false;
	q.push("1");
	while(n--){
        q.push(q.front() + "0");
		q.push(q.front() + "1");
		res.push_back(q.front());	
		q.pop();
	}
    return res;
}
