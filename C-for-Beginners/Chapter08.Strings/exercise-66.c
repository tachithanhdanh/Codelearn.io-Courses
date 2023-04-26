#include <stdio.h>
#include <string.h>

#define N 100

int main(void) {
  char c, s[N];
  scanf("%c%s", &c, s);
  int count = 0;
  int len = (int)strlen(s);
  for (int i = 0; i < len; ++i) {
    count += c == s[i];
  }
  printf("%d", count);
  return 0;
}
