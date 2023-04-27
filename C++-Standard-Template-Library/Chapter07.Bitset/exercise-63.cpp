long long bitsetFunction(int n)
{
    bitset<20> a;
    a[n] = 1;
    return a.to_ullong();
}
