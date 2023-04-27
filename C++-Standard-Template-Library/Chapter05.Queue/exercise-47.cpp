int digits(int n){
    int ans=0;
    while (n){
        ++ans; n/=10;
    }
    return ans;
}

bool isPrime(int n){
    if (n<2) return false;
    if (n==2 || n==3 || n==5 || n==7) return true;
    if (n%2==0 || n%3==0 || n%5==0 || n%7==0) return false;
    for (int i=11;i*i<=n;i+=2){
        if (n%i==0) return false;
    }
    return true;
}

std::vector<int> superPrimeNumber(int n)
{
    queue<int> qu; vector<int> v;
    for (int i=2;i<=min(n,10);++i){
        if (isPrime(i)) qu.push(i);
    }
    while (qu.empty()==false){
        for (int i=1;i<=9;++i){
            if (isPrime(qu.front()*10+i) && qu.front()*10+i<=n){
                qu.push(qu.front()*10+i);
            }
        }
        v.push_back(qu.front());
        qu.pop();
    }
    return v;
}
