#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  printf("n is an %s number", (n & 1 ? "odd" : "even"));
  return 0;
}
