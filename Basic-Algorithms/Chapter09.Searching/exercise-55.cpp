bool beautifulArray(std::vector<int> arr)
{   if (arr.size()<3) return false;
    vector<int> prefix ((int)arr.size(),0);
    prefix[0]=arr[0];
    for (int i=1;i<arr.size();++i){
        prefix[i]+=prefix[i-1]+arr[i];
    }
    for (int i=1;i<arr.size();++i){
        if (prefix[i-1]==prefix[arr.size()-1]-prefix[i]) return true;
    }
    return false;
}
