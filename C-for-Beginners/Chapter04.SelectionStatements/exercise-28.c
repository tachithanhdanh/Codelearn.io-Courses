#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  if (n) printf("n is a %s number", n > 0 ? "positive" : "negative");
  else printf("n is equal to 0");
  return 0;
}
