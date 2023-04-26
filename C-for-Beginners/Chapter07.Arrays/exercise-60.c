#include <stdio.h>

#define N 1005

int main(void) {
  int a[N][N], n, m;
  scanf("%d%d", &n, &m);
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      scanf("%d", &a[i][j]);
    }
  }
  int sum = 0;
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < m; ++j) {
      sum += a[i][j];
    }
  }
  printf("%d\n", sum);
  return 0;
}
