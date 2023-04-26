#include <stdio.h>
#include <string.h>

#define N 200

int main(void) {
  const char* ans[] = {"don't have", "having"};
  char name[2][N];
  scanf("%s%s", name[0], name[1]);
  printf("two people %s the same name", ans[strcmp(name[0], name[1]) == 0]);
  return 0;
}
