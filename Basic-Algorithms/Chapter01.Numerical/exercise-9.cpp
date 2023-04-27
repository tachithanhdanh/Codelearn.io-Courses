long long numberZeroDigits(long long n)
{
   if (n<=4) return 0;
   long long d=0,k=5;
   while(k<=n)
   {
       d+=n/k;
       k*=5;
   }
   return d;
}
