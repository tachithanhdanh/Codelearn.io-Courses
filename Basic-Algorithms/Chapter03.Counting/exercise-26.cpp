int differentSquares(std::vector<std::vector<int>> matrix)
{   set<int> ss; int n;
    for (int i=0;i<matrix.size()-1;++i) {
        for (int j=0;j<matrix[0].size()-1;++j) {
            n=0;
            n+=matrix[i][j]*1000; n+=matrix[i][j+1]*100;
            n+=matrix[i+1][j]*10; n+=matrix[i+1][j+1];
            ss.insert(n);
        }
    }
    return ss.size();
}
