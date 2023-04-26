#include <stdio.h>

#define N 200005

int main(void) {
  int n, a[N];
  scanf("%d", &n);
  for (int i = 0; i < n; ++i) scanf("%d", &a[i]);
  int max = -N;
  for (int i = 0; i < n; ++i) {
    if (a[i] > max) max = a[i];
  }
  printf("%d", max);
  return 0;
}
