#include <queue>
#include <vector>
#include <utility>
#include <iostream>

using std::vector;

int cluster(vector<vector<int>> matrix) {
    vector<vector<bool>> visited(matrix.size(), vector<bool>(matrix[0].size()));
    int n = matrix.size();
    int m = matrix[0].size();
    static const int dx[] = {0, -1, 0, +1};
    static const int dy[] = {-1, 0, +1, 0};
    int count_cluster = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (!visited[i][j] && matrix[i][j]) {
                std::queue<std::pair<int, int>> qu;
                qu.push(std::make_pair(i, j));
                visited[i][j] = true;
                while (!qu.empty()) {
                    int x = qu.front().first;
                    int y = qu.front().second;
                    qu.pop();
                    for (int k = 0; k < 4; ++k) {
                        int new_x = x + dx[k];
                        int new_y = y + dy[k];
                        auto is_valid = [&]() {
                            return new_x >= 0 && new_x < n && new_y >= 0 && new_y < m && !visited[new_x][new_y] && matrix[new_x][new_y];
                        };
                        if (is_valid()) {
                            visited[new_x][new_y] = true;
                            qu.push(std::make_pair(new_x, new_y));
                        }
                    }
                }
                ++count_cluster;
            }
        }
    }
    // for (int i = 0; i < n; ++i) {
    //     for (int j = 0; j < n; ++j) {
    //         std::cout << visited[i][j] << " \n"[j == n - 1];
    //     }
    // }
    return count_cluster;
}

int main(void) {
    vector<vector<int>> matrix = {{1,0,0,1,1},{0,1,1,1,1},{1,1,0,0,0},{0,0,1,0,1}};
    std::cout << cluster(matrix);
}
