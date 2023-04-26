#include <stdio.h>

#define N 200005

int main(void) {
  int n, a[N], k;
  scanf("%d", &n);
  for (int i = 0; i < n; ++i) {
    scanf("%d", &a[i]);
  }
  scanf("%d", &k);
  int counts = 0;
  for (int i = 0; i < n; ++i) {
    if (a[i] == k) {
      ++counts;
    }
  }
  printf("%d\n", counts);
  return 0;
}
