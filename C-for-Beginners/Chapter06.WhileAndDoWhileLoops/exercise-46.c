#include <stdio.h>

int main(void) {
  int a, b;
  scanf("%d%d", &a, &b);
  int p = 1;
  while (b--) {
    p *= a;
  }
  printf("%d\n", p);
  return 0;
}
