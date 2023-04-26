#include <stdio.h>

#define N 200005

int main(void) {
  int n, a[N];
  scanf("%d", &n);
  for (int i = 0; i < n; ++i) {
    scanf("%d", &a[i]);
  }
  for (int i = 0; i < n; ++i) {
    if (!(a[i] & 1)) printf("%d%c", a[i], " \n"[i == n - 1]);
  }
  return 0;
}
