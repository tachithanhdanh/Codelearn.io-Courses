#include <stdio.h>

int main(void) {
  int a, b;
  scanf("%d%d", &a, &b);
  printf("a + b = %d\na - b = %d\na * b = %d\na / b = %d\na mod b = %d", a + b, a - b, a * b, a / b, a % b);
  return 0;
}
