string formatString(string s)
{
    while (s[0]==' ') s.erase(0,1);
    while (s[s.size()-1]==' ') s.pop_back();
    while (s.find("  ")!=-1) s.erase(s.find("  "),1);
    return s;
}
