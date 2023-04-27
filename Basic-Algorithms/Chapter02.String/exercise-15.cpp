string truncateString(string s)
{   
    while (s.size()) {
        if ((s.front()-'0')%3==0) s.erase(0,1);
        else if ((s.back()-'0')%3==0) s.pop_back();
        else if ((s.front()+s.back()-'0'-'0')%3==0) {
            s.erase(0,1);
            s.pop_back();
        }
        else break;
    }
    return s;
}
