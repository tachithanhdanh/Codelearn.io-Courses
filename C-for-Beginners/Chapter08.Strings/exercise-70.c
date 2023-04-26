#include <stdio.h>
#include <string.h>

#define N 200

int main(void) {
  char s[N];
  scanf("%s", s);
  int len = (int)strlen(s);
  for (int i = 0; i < len; ++i) {
    if ('A' <= s[i] && s[i] <= 'Z') {
      s[i] = (s[i] - 'A') + 'a';
    }
  }
  puts(s);
  return 0;
}
