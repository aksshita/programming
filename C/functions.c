			/* By default any C program returns an int value*/
#include <stdio.h>

float func1(int x, float y) {
  return(x*y);
}

void func2(int a, int b) {
	printf("value of a is: %d\n", a );
	printf("value of b is: %d\n", b );
	//printf("address of a is: %u\n", &a);
	//printf("address of b is: %u\n", &b);
  printf("value of a is: %d\n", *(&a));
  printf("value of a is: %d\n", *(&a));
}

unsigned int factorial(int);

int main() {
  //float result;
  //int x,y;
  //result = func1(2,4.1);
  //printf("result is: %f", result);
  //printf("enter 2 values..\n");
  //scanf("%d%d", &x,&y);
  //func2(x,y);
  unsigned int result;
  result = factorial(3);
  printf("factorial is %u\n", result);
  return 0;
 }


