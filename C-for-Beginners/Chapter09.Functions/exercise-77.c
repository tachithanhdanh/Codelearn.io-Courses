#include <stdio.h>

#define N 2000

void swap(int* a, int* b) {
  int temp = *a;
  *a = *b;
  *b = temp;
  return;
}

void sortArray(int a[], int n) {
  for (int i = 0; i < n; ++i) {
    for (int j = 1; j < n; ++j) {
      if (a[j] > a[j - 1]) {
        swap(&a[j], &a[j - 1]);
      }
    }
  }
  return;
}

int main(void) {
  int n, a[N];
  scanf("%d", &n);
  for (int i = 0; i < n; ++i) {
    scanf("%d", &a[i]);
  }
  sortArray(a, n);
  for (int i = 0; i < n; ++i) {
    printf("%d%c", a[i], " \n"[i == n - 1]);
  }
  return 0;
}
