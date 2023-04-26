#include <stdio.h>
#include <string.h>

#define N 200

int main(void) {
  for (int i = 0; i < 26; ++i) {
    putchar((int)'A' + i);
  }
  return 0;
}
