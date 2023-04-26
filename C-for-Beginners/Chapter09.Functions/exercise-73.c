#include <stdio.h>
#include <string.h>

void print() {
  for (int i = 1; i <= 100; ++i) {
    printf("%d%c", i, " \n"[i == 100]);
  }
  return;
}

int main(void) {
  print();
  return 0;
}
