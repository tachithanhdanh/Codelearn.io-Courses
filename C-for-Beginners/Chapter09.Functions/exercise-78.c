#include <stdio.h>

#define N 2000

int sumOfArray(int* a, int n) {
  int sum = 0;
  for (int* p = a; p != a + n; ++p) {
    sum += *p;
  }
  return sum;
}

int main(void) {
  int n, a[N];
  scanf("%d", &n);
  for (int i = 0; i < n; ++i) {
    scanf("%d", &a[i]);
  }
  printf("%d", sumOfArray(a, n));
  return 0;
}
