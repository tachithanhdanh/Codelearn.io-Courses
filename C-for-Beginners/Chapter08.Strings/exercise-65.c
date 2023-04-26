#include <stdio.h>
#include <string.h>

#define N 100

int main(void) {
  char s[N];
  scanf("%s", s);
  printf("%llu\n", strlen(s));
  return 0;
}
