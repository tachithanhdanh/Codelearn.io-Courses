 
string luatchung(string s)
{
    for (auto& c : s)
    {
        if (c >= 'a' && c <= 'z') continue;
        if (c >= 'A' && c <= 'Z') continue;
        if (c >= '0' && c <= '9') continue;
        if (c == ',' || c == ' ') continue;
        c = ' ';
    }
    return s;
}
 
string luathoi(string s)
{
    while (!s.empty())
    {
        char c = s[s.length() - 1];
        if (c >= 'a' && c <= 'z') break;
        if (c >= 'A' && c <= 'Z') break;
        if (c >= '0' && c <= '9') break;
        s.erase(s.length() - 1, 1);
    }
    s += '?';
    return s;
}
 
string luatphay(string s)
{
    for (int i = 1; i < s.length() - 1; i++)
    {
        if (s[i] == ',')
        {
            while (i != 1)
            {
                char c = s[i - 1];
                if (c >= 'a' && c <= 'z') break;
                if (c >= 'A' && c <= 'Z') break;
                if (c >= '0' && c <= '9') break;
                s.erase(i - 1, 1);
                i--;
            }
            i++;
            s.insert(i, " ");
        }
    }
    return s;
}
 
string luatcach(string s)
{
    while (s[0] == ' ') s.erase(0, 1);
    while (s[s.length() - 1] == ' ') s.erase(s.length() - 1, 1);
    while (s.find("  ") != -1) s.erase(s.find("  "), 1);
    for (int i = 1; i < s.length() - 1; i++)
    {
        if (s[i] == ' ')
        {
            char c = s[i + 1];
            if (c >= 'a' && c <= 'z') continue;
            if (c >= 'A' && c <= 'Z') continue;
            if (c >= '0' && c <= '9') continue;
            s.erase(i, 1);
            i--;
        }
    }
    return s;
}
 
string luatchu(string s)
{
    while (!s.empty())
    {
        char c = s[0];
        if (c >= 'a' && c <= 'z') break;
        if (c >= 'A' && c <= 'Z') break;
        if (c >= '0' && c <= '9') break;
        s.erase(0, 1);
    }
    for (auto& c : s)
    {
        if (c >= 'A' && c <= 'Z') c = char(c + 32);
    }
    char& c = s[0];
    if (c >= 'a' && c <= 'z') c = char(c - 32);
    return s;
}
 
string questionCorrection(string s)
{
    s = luatchung(s);
    s = luatchu(s);
    s = luathoi(s);
    s = luatphay(s);
    s = luatcach(s);
 
    return s;
}
