#include <stdio.h>

unsigned long factorial(int);
long factorial_rec(int);

int main() {
	int n;
  unsigned long result;
  printf("enter a number to calculte its factorial\n");
  scanf("%d", &n);
  
  result = factorial(n);
  printf("factorial is: %ld\n", result);
  //printf("factorial is: %ld\n", factorial(-3));
  //printf("factorial is: %ld\n", factorial_rec(3));
  return 0;
}

unsigned long factorial(int x) {
  long f = 1; int i;
  for( i = 1; i <= x; i++)
        f *= i;
  return f;
}

long factorial_rec(int x) {
  long f = 1;
  //if(x == 0 || x == 1)
    //return 1;
  //else {
    f = x*factorial_rec(x-1);
    return f;
  //}
}
