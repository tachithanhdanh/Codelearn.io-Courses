std::vector<std::string> mergeStringArr(std::vector<std::string> arr1, std::vector<std::string> arr2)
{
    set<string> ans(arr1.begin(),arr1.end());set<string>::iterator a=ans.begin();
    for (auto it=arr2.begin();it!=arr2.end();++it){
        a=ans.find(*it);
        if (ans.find(*it)!=ans.end()){
            ans.erase(a);
        }
    }
    vector<string> finalans(ans.begin(),ans.end());
    return finalans;
}
