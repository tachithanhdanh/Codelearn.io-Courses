int num(int n){
    int ans=1;
    while (n){
        ans*=n%10;
        n/=10;
    }
    return ans;
}

int digitsProduct(int product)
{
    for (int i=1;i<=10000000;++i){
        if (num(i)==product) return i;        
    }
    return -1;
}
