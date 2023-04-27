int countPlace(std::vector<int> a, int k)
{
    int cnt = 1;
    int check = a[0] + 2*k;
    for(int i = 1; i < a.size(); i++)
    {
        if(a[i] > check || a[i] - a[i-1] > k)
        {
            cnt++;
            check = a[i] + 2 * k;
        }
    }
    return cnt;
}
