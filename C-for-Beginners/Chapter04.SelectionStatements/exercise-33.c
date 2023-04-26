#include <stdio.h>

int main(void) {
  int a;
  scanf("%d", &a);
  printf("The score is%s valid", (0 <= a && a <= 10) ? "\0" : " not");
  return 0;
}
