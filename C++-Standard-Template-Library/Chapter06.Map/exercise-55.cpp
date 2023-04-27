#define all(x) (x).begin(), (x).end()

vector<string> greaterString(vector<string> arr1, vector<string> arr2)
{
    vector<string> ans;
    sort(all(arr1));
    for (string s : arr2){
        auto it = upper_bound(all(arr1),s);
        if (it!=arr1.end()) ans.push_back(*it);
        else ans.push_back("-1");
    }
    return ans;
}
