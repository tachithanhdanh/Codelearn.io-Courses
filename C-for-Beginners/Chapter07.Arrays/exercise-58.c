#include <stdio.h>

#define N 200005

int main(void) {
  int a[N], n;
  scanf("%d", &n);
  for (int i = 0; i < n; ++i) {
    scanf("%d", &a[i]);
  }
  for (int i = 0; i < n; ++i) {
    if (0 <= a[i] && a[i] <= 10) {
      printf("%d ", a[i]);
    }
  }
  return 0;
}
