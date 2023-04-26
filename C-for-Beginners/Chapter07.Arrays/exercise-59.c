#include <stdio.h>

#define N 200005

int main(void) {
  int n, a[N], cnt[N];
  for (int i = 0; i < N; ++i) {
    cnt[i] = 0;
  }
  scanf("%d", &n);
  for (int i = 0; i < n; ++i) {
    scanf("%d", &a[i]);
  }
  for (int i = 0; i < n; ++i) {
    ++cnt[a[i]];
  }
  int pos = 0;
  for (int i = 0; i < N; ++i) {
    while (cnt[i]--) {
      a[pos++] = i;
    }
  }
  for (int i = 0; i < n; ++i) {
    printf("%d%c", a[i], " \n"[i == n - 1]);
  }
  return 0;
}
