#include <stdio.h>

long factorial(int);
long factorial_rec(int);

int main() {
  int n;
  long result;
  printf("enter a number to calculte its factorial\n");
  scanf("%d",&n);
  if(n < 0)
    printf("enter a positive integer.");
  else {
  result = factorial_rec(n);
  printf("factorial is: %ld\n", result);
  }
  return 0;
}

long factorial(int x) {
  long f = 1; int i;
  for( i = 1; i <= x; i++)
    f *= i;
  return f;
}

long factorial_rec(int x) {
  long f = 1;
  if(x == 0)
    return 1;   
  else {
    f = x*factorial_rec(x-1); 
  return f;
  }
}