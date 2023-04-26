#include <stdio.h>

int main(void) {
  int i = 0;
  do {
    ++i;
    printf("%d ", i);
  } while (i != 5);
  return 0;
}
