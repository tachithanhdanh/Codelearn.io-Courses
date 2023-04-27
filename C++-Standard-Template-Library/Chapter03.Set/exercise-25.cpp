string secondOrder(std::vector<int> arr)
{   set<int> ans;
    for(vector<int>::iterator i=arr.begin();i!=arr.end();++i){
        ans.insert(*i);
    }
    if(ans.size()>1){
        set<int>::iterator it=ans.begin();++it;
        return to_string(*it);
    }
    else return "NO";   
}
