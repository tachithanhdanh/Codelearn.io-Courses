#include <stdio.h>

int main(void) {
  int a, b;
  scanf("%d%d", &a, &b);
  printf("%s", (a && b ? "a is not equal to 0 and b is not equal to 0" : "a is equal to 0 or b is equal to 0"));
  return 0;
}
