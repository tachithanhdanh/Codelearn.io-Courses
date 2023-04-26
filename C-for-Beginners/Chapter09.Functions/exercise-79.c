#include <stdio.h>

#define N 2000

int max(int a, int b) {
  return a > b ? a : b;
}

int maxOfArray(int *a, int n) {
  int maxValue = -1 * N * N;
  for (int *p = a; p != a + n; ++p) {
    maxValue = max(maxValue, *p);
  }
  return maxValue;
}

int main(void) {
  int len[2], a[2][N];
  for (int i = 0; i < 2; ++i) {
    scanf("%d", &len[i]);
    for (int j = 0; j < len[i]; ++j) {
      scanf("%d", &a[i][j]);
    }
  }
  for (int i = 0; i < 2; ++i) {
    printf("%d%c", maxOfArray(a[i], len[i]), " \n"[i == 1]);
  }
  return 0;
}
