#include <stdio.h>

#define N 200005

int main(void) {
  int a[N], n;
  scanf("%d", &n);
  for (int i = 0; i < n; ++i) {
    scanf("%d", &a[i]);
  }
  int sum = 0;
  for (int i = 0; i < n; ++i) {
    if (a[i] > 0 && (a[i] & 1)) {
      sum += a[i];
    }
  }
  printf("%d\n", sum);
  return 0;
}
