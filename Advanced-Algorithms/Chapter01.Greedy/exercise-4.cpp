unsigned long long decorateRoom(unsigned long long r,unsigned long long g,unsigned long long b)
{   unsigned long long ans=0,ans1=0,a;
    vector<unsigned long long> v(3),vt; v[0]=r; v[1]=g; v[2]=b;
    sort(v.rbegin(),v.rend());
	vt=v;
	while (v.size()>1){
		b=v.front(); a=v.back();
		if (a+b<3) break;
		if (v.size()==3){
			ans+=min(a,b/2);
			v[2]-=min(a,b/2); v[0]-=min(a*2,(b/2)*2);
		}
		else {
			ans+=min(a,b/2);
			v[1]-=min(a,b/2); v[0]-=min(a*2,(b/2)*2);
		}
		sort(v.rbegin(),v.rend());
		if(v.back()==0) v.pop_back();
		if(v.back()==0) v.pop_back();
	}
	while (vt.size()>1){
		b=vt.front(); a=vt[1];
		if (a+b<3) break;
		ans1+=min(a,b/2);
		vt[1]-=min(a,b/2); vt[0]-=min(a*2,(b/2)*2);
        if (vt[0]==vt[1] && vt[2]==vt[1]){
			ans1+=vt[0]; break;
		}
		sort(vt.rbegin(),vt.rend());
		if(vt.back()==0) vt.pop_back();
		if(vt.back()==0) vt.pop_back();
	}
    return max(ans,ans1);
}
