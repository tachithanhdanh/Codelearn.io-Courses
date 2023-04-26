#include <stdio.h>
#include <string.h>

#define N 1010

int main(void) {
  char s[N];
  fgets(s, N, stdin);
  fputs(s, stdout);
  return 0;
}
