#include <stdio.h>

int main(void) {
  int n;
  scanf("%d", &n);
  long long p = 1;
  for (int i = 1; i <= n; ++i) p *= (long long) i;
  printf("%lld", p);
  return 0;
}
