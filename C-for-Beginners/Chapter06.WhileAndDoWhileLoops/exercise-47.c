#include <stdio.h>

int main(void) {
  int a, b;
  scanf("%d%d", &a, &b);
  while (a <= b) {
    if (a % 15 == 0) printf("%d%c", a, " \n"[a == b]);
    ++a;
  }
  return 0;
}
