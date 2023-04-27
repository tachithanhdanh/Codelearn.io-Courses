bool check[10];

bool checkrow(const vector<vector<char>> &grid){
    for (int i=0;i<9;++i){
        memset(check,false,sizeof(check));
        for (int j=0;j<9;++j){
            if (grid[i][j]!='.') {
                if (check[grid[i][j]-'0']) return false;
                else check[grid[i][j]-'0']=true;
            }
        }
    }
    return true;
}

bool checkcol(const vector<vector<char>> &grid){
    for (int i=0;i<9;++i){
        memset(check,false,sizeof(check));
        for (int j=0;j<9;++j){
            if (grid[j][i]!='.') {
                if (check[grid[j][i]-'0']) return false;
                else check[grid[j][i]-'0']=true;
            }
        }
    }
    return true;
}

bool checksub(const vector<vector<char>> &grid){
    for (int i=0;i<9;i+=3){
        memset(check,false,sizeof(check));
        for (int j=0;j<9;j+=3){
            memset(check,false,sizeof(check));
            for (int n=i;n<i+3;++n){
                for (int m=j;m<j+3;++m){
                    if (grid[n][m]!='.') {
                        if (check[grid[n][m]-'0']) return false;
                        else check[grid[n][m]-'0']=true;
                    }       
                }
            }
        }
    }
    return true;
}

bool sudokuChecking(std::vector<std::vector<char>> grid)
{
    return (checkcol(grid) && checkrow(grid) && checksub(grid));
}
