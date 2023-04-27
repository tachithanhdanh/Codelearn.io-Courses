const int con=22082018;
long long primeSum(int n)
{
    if (n<2) return 0; long long sum=0;
    bool a[n+1]; a[0]=false; a[1]=false;  
    for(int i=2;i<n+1;++i) a[i]=true;
    for (int i=2;i<=sqrt(n);i+=2)
    {
        if(a[i]==true)
        {
            for (int j=i*2;j<=n;j+=i)
            {
                a[j]=false;
            }
        }
        if(i==2) --i;
    }
    for (int i=2;i<=n;++i)
    {
        if (a[i]) sum+=(i%con);
    }
    return sum%con;
}
