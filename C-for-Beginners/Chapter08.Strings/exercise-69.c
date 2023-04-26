#include <stdio.h>
#include <string.h>

#define N 200

int main(void) {
  char s[N];
  scanf("%s", s);
  int len = (int)strlen(s);
  for (int i = 0; i < len; ++i) {
    if ('a' <= s[i] && s[i] <= 'z') {
      s[i] = (s[i] - 'a') + 'A';
    }
  }
  puts(s);
  return 0;
}
