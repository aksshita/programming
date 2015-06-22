#include <stdio.h>

float circle(int);

int main() {
  float area;
  int radius = 2;
  area = circle(radius);
  printf("%f\n", area);
}

float circle(int r) {
  float a;
  a = 3.14 * r * r;
  return a;
}
