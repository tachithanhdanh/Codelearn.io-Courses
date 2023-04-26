#include <stdio.h>

int main(void) {
  int n;
  scanf("%d", &n);
  int cnt = 0;
  {
    int i = 1;
    while (i <= n) {
      if (n % i == 0) ++cnt;
      ++i;
    }
  }
  printf("%d\n", cnt);
  return 0;
}
