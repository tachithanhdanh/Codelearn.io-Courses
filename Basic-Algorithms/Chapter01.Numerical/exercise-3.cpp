int GCD(int a,int b)
{
    return b==0? a : GCD(b,a%b);
}

int seive(int n)
{
    bool check[n+1];
    for (int i=0;i<n+1;++i)
    {
        check[i]=1;
    }
    for (int i=2;i<=sqrt(n);++i)
    {
        if (check[i] == true) 
        {
            for (int j=2;i*j<=n;++j)
            {
                check[i*j]=false;
            }
        }
    }
    for (int i=n;i>1;--i)
    {
        if (check[i]==true && n%i==0) return i;
    }
    return -1;
}

int greatestCommonPrimeDivisor(int a, int b)
{
    return seive(GCD(a,b));
}
