#include <stdio.h>

int main(void) {
  int n;
  scanf("%d", &n);
  for (int i = 1; i <= n; ++i) {
    printf("%d%c", i, " \n"[i == n]);
  }
  return 0;
}
