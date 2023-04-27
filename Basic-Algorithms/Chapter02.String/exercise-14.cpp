bool isTandemRepeat(string s)
{
    if (s.size()&1) return false;
    else return (s.substr(0,s.size()/2)==s.substr(s.size()/2,s.size()/2));
}
