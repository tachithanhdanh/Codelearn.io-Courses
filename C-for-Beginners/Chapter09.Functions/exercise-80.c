#include <stdio.h>

#define N 1000

int countOddNumberInArray(int *a, int n) {
  int count = 0;
  for (int *p = a; p != a + n; ++p) {
    count += (*p) & 1;
  }
  return count;
}

int main(void) {
  int n, a[N];
  scanf("%d", &n);
  for (int i = 0; i < n; ++i) {
    scanf("%d", &a[i]);
  }
  printf("%d\n", countOddNumberInArray(a, n));
  return 0;
}
