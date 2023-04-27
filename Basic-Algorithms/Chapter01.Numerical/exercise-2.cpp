int solve(int n)
{
    int sum=0;
    for (int i=2;i<=sqrt(n);++i)
    {
        while (n%i==0)
        {
            n/=i;
            sum+=i;
        }
    }
    return n==1 ? sum : (sum+n);
}
int factorSum(int n)
{
    while(n!=solve(n))
    {
        n=solve(n);
    }
    return n;
}
