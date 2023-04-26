#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define N 200

void show(char* s) {
  int len = (int)strlen(s);
  for (int i = 0; i < len; ++i) {
    putchar(tolower(s[i]));
  }
  putchar('\n');
  return;
}

int main(void) {
  char s[3][N];
  for (int i = 0; i < 3; ++i) {
    scanf("%s", s[i]);
    show(s[i]);
  }
  return 0;
}
