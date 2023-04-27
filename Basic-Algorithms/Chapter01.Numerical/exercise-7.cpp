using ll = long long;

ll n,d,ans;

ll poww10(ll d){
	ll ans=1;
	while (d--){
		ans*=10;
	}
	return ans;
}

ll digits(ll n){
	ll ans=0;
	while (n){
		++ans; n/=10;
	}
	return ans;
}

ll pagesNumbering(ll n)
{
	d=digits(n);
	n=n-poww10(d-1)+1;
	for (int i=1;i<d;++i){
		ans+=(i)*(poww10(i)-poww10(i-1));
	}
	ans+=d*n;
    return ans;
}
