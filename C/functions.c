                  /*Chapter 5*/
#include <stdio.h>

/* By default any C program returns an int value*/
float func1(int x, float y) {
  return(x*y);
}

/*function to demonstrate pointers and addressof operator*/
void func2(int a, int b) {
	printf("value of a is: %d\n", a );
	printf("value of b is: %d\n", b );
	//printf("address of a is: %u\n", &a);
	//printf("address of b is: %u\n", &b);
  printf("value of a is: %d\n", *(&a));
  printf("value of a is: %d\n", *(&a));
}

float float_Int(int,float);
int digit_Sum(int);

int main() {

  //float result;
  //int x,y;
  //result = func1(2,4.1);
  //printf("result is: %f", result);
  //printf("enter 2 values..\n");
  //scanf("%d%d", &x,&y);
  //func2(x,y);
  /*unsigned int result;
  result = factorial(3);
  printf("factorial is %u\n", result);*/
  /*int x;
  float y, result;
  printf("entr an integer:\n");
  scanf("%d", &x);
  printf("enter a floating point number\n");
  scanf("%f", &y);
  result = float_Int(x,y);
  printf("the product of two numbers is: %f\n", result );*/
  int n, sum;
  printf("enter a integer:\n");
  scanf("%d", &n);
  sum = digit_Sum(n);
  printf("sum of digits of the number %d is: %d\n", number,sum );
  return 0;
 }

/*Chapter 5 [F] (a)*/
 float float_Int(int a, float b) {
  return (a * b);
 }

/*[J](a)*/
 int digit_Sum(int number) {
  int sum = 0;
  int n = number;
  while(n != 0) {
    int rem = n%10;
    sum = sum + rem;
    n = n/10;
  }
  return sum;
}