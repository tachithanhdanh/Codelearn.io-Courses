#include <stdio.h>

int main(void) {
  int a, b;
  scanf("%d%d", &a, &b);
  int temp = a;
  a = b, b = temp;
  printf("after swapping, a = %d, b = %d", a, b);
  return 0;
}
