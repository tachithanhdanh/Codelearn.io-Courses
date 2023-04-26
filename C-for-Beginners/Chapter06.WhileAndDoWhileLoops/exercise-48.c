#include <stdio.h>

int main(void) {
  for (int i = 1; i <= 100; ++i) {
    if (i > 50) break;
    printf("%d ", i);
  }
  return 0;
}
