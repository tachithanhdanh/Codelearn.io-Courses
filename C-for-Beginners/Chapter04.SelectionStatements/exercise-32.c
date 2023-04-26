#include <stdio.h>

int main(void) {
  int n;
  scanf("%d", &n);
  printf("%d is%s in range (10, 100)", n, (10 <= n && n <= 100) ? "\0" : " not");
  return 0;
}
