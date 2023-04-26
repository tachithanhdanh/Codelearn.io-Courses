#include <stdio.h>
#include <string.h>

#define N 200

int main(void) {
  char s[N], c;
  scanf("%c%s", &c, s);
  int len = (int)strlen(s);
  for (int i = 0; i < len; ++i) {
    if (s[i] == c) {
      printf("%d\n", i);
      return 0;
    }
  }
  // printf("%s %c", s, c);
  puts("-1");
  return 0;
}
