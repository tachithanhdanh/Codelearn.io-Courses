int lastDigitDiffZero(int n)
{
    long long a=1;
    for (int i=2;i<=n;++i)
    {
        a*=i;
        while (a%10==0) a/=10;
        a=a%1000;
    }
    while (a%10==0) a/=10;
    return a%10;
}
