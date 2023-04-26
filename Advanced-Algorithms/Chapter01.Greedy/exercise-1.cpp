int numberOfToys(std::vector<int> arr, int k)
{
    sort(arr.begin(),arr.end());
    for (int i=1;i<arr.size();++i){
        arr[i]+=arr[i-1];
    }
    int i=0;
    while (i<arr.size() && k>=arr[i]){
        ++i;
    }
    return i;
}
