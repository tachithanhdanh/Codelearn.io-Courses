#include <stdio.h>

int main(void) {
  int i = 10;
  do {
    printf("%d ", i);
    i += 10;
  } while (i <= 1000);
  return 0;
}
