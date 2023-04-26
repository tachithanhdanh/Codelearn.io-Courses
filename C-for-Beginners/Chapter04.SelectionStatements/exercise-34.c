#include <stdio.h>

int main(void) {
  int a, b, c;
  scanf("%d%d%d", &a, &b, &c);
  if (a <= b && b <= c) {
    printf("increasing\n");
  } else if (a >= b && b >= c) {
    printf("decreasing\n");
  } else {
    printf("neither increasing nor decreasing order\n");
  }
  return 0;
}
