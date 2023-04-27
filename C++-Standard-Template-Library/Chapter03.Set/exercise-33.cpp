vector<string> getDistinctProducts(vector<string> products){
	set<string> distinctProducts(products.begin(),products.end());
    vector<string> ans(distinctProducts.begin(),distinctProducts.end());
    return ans;
}
