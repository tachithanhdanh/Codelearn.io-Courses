std::vector<std::vector<int>> uniqueRows(std::vector<std::vector<int>> matrix)
{
    set<vector<int>> check; vector<vector<int>> ans;
    for (auto it=matrix.begin();it!=matrix.end();++it){ //auto it== std::vector<std::vector<int>>::iterator
        if(!check.count(*it)){ //if (check.count(*it)==0)
            check.insert(*it);
            ans.push_back(*it);
        }
    }
    return ans;
}
