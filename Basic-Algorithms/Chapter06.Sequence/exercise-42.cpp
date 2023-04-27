bool cnt[21];
std::vector<int> makeArrayConsecutive(std::vector<int> sequence)
{   if (sequence.size()==1) return {};
    sort(sequence.begin(),sequence.end());
    int mn=sequence[0],mx=sequence[sequence.size()-1];
    for (int i=0;i<sequence.size();++i){
        cnt[sequence[i]+10]=true;
    }
    vector <int> ans;
    for (int i=mn+10;i<mx+11;++i) {
        if (!cnt[i]) ans.push_back(i-10);
    }
    return ans;
}
