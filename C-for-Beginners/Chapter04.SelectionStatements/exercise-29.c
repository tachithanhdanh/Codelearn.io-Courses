#include <stdio.h>

int main() {
  int a, b;
  scanf("%d%d", &a, &b);
  printf("a is %s b", (a >= b? "greater than or equal to" : "smaller than"));
  return 0;
}
