#include <stdio.h>

int main(void) {
  int n;
  scanf("%d", &n);
  int sum = 0;
  for (int i = 1; i <= n; i += 2) {
    sum += i;
  }
  printf("%d", sum);
  return 0;
}
