#include <stdio.h>
#include <string.h>

#define N 100

int main(void) {
  char s[N];
  scanf("%s", s);
  int len = (int)strlen(s);
  for (int i = 0; i < len; ++i) {
    if (s[i] == '3') s[i] = 'e';
  }
  printf("%s", s);
  return 0;
}
