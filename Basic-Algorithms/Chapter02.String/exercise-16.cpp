int stringsCrossover(vector<string> a, string s)
{   int ans=0; bool flag=false;
    for (int i=0;i<a.size();++i) {
        for (int j=i+1;j<a.size();++j) {
            flag=true;
            for (int k=0;k<a[0].size();++k) {
                if (s[k]!=a[i][k] && s[k]!=a[j][k]) {
                    flag=false; break;
                }
            }
            if (flag) ++ans;
        }
    }
    return ans;
}
