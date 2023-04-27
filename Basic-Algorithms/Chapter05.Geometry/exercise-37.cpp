int countTriangles(std::vector<int> x, std::vector<int> y)
{   int ans=0;
    for (int i=0;i<x.size();++i){
        for (int j=i+1;j<x.size();++j){
            for (int k=j+1;k<x.size();++k){
                if (((x[i]-x[j])*(y[j]-y[k])-(x[j]-x[k])*(y[i]-y[j]))) ++ans;
            }
        }
    }
    return ans;
}
