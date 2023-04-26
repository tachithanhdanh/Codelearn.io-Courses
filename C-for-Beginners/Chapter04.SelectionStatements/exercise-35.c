#include <stdio.h>
#include <assert.h>
#include <stdbool.h>

int main(void) {
  int a, b;
  char c;
  scanf("%d %c %d", &a, &c, &b);
  switch (c) {
    case '+': printf("%d", a + b); break;
    case '-': printf("%d", a - b); break;
    case '*': printf("%d", a * b); break;
    case '/': printf("%d", a / b); break;
    default: assert(false);
  }
  return 0;
}
