#include <stdio.h>

int main(void) {
  int n;
  scanf("%d", &n);
  while (n <= 100) {
    if (!(n & 1)) printf("%d%c", n, " \n"[n == 100]);
    ++n;
  }
  return 0;
}
