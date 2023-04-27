int maximumDifference(std::vector<std::string> arr)
{
    map<string, int> mp;
    int ans = 0;
    for(int i=0;i<arr.size();i++){
        if(mp.find(arr[i]) == mp.end()){
            mp[arr[i]]=i;
        }
        else{
            ans=max(i-mp[arr[i]],ans);
        }
    }
    return ans;
}
