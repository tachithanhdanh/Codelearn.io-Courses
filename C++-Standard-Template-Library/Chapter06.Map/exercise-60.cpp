vector<int> countPrefix(vector<string> contacts, vector<string> names)
{
    vector<int> ans((int)names.size());
    for (int i=0;i<contacts.size();++i){
        for (int j=0;j<names.size();++j){
            ans[j]+=(contacts[i].substr(0,names[j].size())==names[j]);
        }
    }
    return ans;
}
