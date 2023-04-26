#include <stdio.h>
#include <string.h>

#define N 100

int main(void) {
  char name[N];
  scanf("%s", name);
  char address[N];
  scanf("%s", address);
  printf("Name: %s\nAddress: %s\n", name, address);
  return 0;
}
