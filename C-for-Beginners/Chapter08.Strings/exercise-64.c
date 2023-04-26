#include <stdio.h>
#include <string.h>

#define N 100

int main(void) {
  char s[N];
  int k;
  scanf("%s%d", s, &k);
  printf("%c\n", s[k - 1]);
  return 0;
}
