#include <stdio.h>

#define N 2000

int sumOfArray(int *a, int i, int n) {
  if (i == n) return 0;
  return a[i] + sumOfArray(a, i + 1, n);
}

int main(void) {
  int n, a[N];
  scanf("%d", &n);
  for (int i = 0; i < n; ++i) {
    scanf("%d", &a[i]);
  }
  printf("%d", sumOfArray(a, 0, n));
  return 0;
}
