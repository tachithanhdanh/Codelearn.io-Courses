#include <stdio.h>

#define Pi 3.14

double circumference(double r) {
  return 2 * Pi * r;
}

int main(void) {
  double r;
  scanf("%lf", &r);
  printf("%f", circumference(r));
  return 0;
}
