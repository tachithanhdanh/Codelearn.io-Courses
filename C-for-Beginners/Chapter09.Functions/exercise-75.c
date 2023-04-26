#include <stdio.h>

#define N 200

void print(const char* s) {
  printf("Hello %s\n", s);
  return;
}

int main(void) {
  char s[N];
  scanf("%s", s);
  print(s);
  return 0;
}
