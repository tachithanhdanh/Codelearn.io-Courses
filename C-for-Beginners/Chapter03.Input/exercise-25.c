#include <stdio.h>

#define pi 3.14

int main(void) {
  double r;
  scanf("%lf", &r);
  printf("Circumference = %.6lf", 2.0 * pi * r);
  return 0;
}
