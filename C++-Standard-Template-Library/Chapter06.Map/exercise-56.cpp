bool cnt[2][100001]; long long ans;

int sumOfCommon(std::vector<int> arr1, std::vector<int> arr2)
{
    for (const int &i : arr1) cnt[0][i]=true;
    for (const int &i : arr2) cnt[1][i]=true;
    for (int i=0;i<100001;++i) if (cnt[0][i] && cnt[1][i]) ans+=i;
    return ans;
}
