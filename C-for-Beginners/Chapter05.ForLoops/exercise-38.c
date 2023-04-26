#include <stdio.h>

int main(void) {
  int n;
  scanf("%d", &n);
  for (int i = n; i >= -5; --i) {
    printf("%d%c", i, " \n"[i == -5]);
  }
  return 0;
}
