bool checkSum(vector<int> arr, int sum){
    map<int, int> mp;
    for (const int &i : arr) ++mp[i];
    for (int i=0;i<arr.size();++i){
        if (sum==arr[i]*2){
            if (mp[sum-arr[i]]>=2) return true;
        }
        else if (mp[sum-arr[i]]) return true;
    }
    return false;
}
