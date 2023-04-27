int aramic(std::vector<std::string> words)
{
    set<set<char>> s;
    for(int i = 0 ; i < words.size(); i++){
        set<char> s2(words[i].begin(),words[i].end());
        s.insert(s2);
    }    
    return s.size();
}
