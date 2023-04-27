bool check[26];
bool isPangram(string sentence)
{
    for (char x:sentence) {
        if (x>='A' && x<='Z') check[x-'A']=true;
        else if (x>='a' && x<='z') check[x-'a']=true;
    }
    for (bool b : check) if (!b) return false;
    return true;
}
