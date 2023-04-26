#include <stdio.h>

int main(void) {
  int a, b;
  scanf("%d%d", &a, &b);
  for (int i = a; i <= b; ++i) {
    printf("%d%c", i, " \n"[i == b]);
  }
  return 0;
}
