#include <stdio.h>

#define N 200005

int main(void) {
  int n, a[N];
  scanf("%d", &n);
  for (int i = 0; i < n; ++i) {
    scanf("%d", &a[i]);
  }
  printf("%d\n", a[0] + a[n - 1]);
  return 0;
}
