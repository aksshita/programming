#include <stdio.h>

void display();
long power(int,int);
int is_Leap(int);

int main() {
	//printf("only stupids use C?\n");
	//display();
  //main();
  //long r;
  /*r = power(2,-3);
  printf("result is: %ld\n", r);*/
  /*int n,p;
  printf("enter a number:\n");
  scanf("%d", &n);
  printf("enter power to be raised:\n");
  scanf("%d", &p);
  r = power(n,p);
  printf("%d raised to the power %d is: %ld\n",n,p,r);*/
  int y,l;
  printf("enter an year to check if it is a leap year:\n");
  scanf("%d", &y);
  l = is_Leap(y);
  printf("l = %d\nl = 0 implies it is a leap year\nl = 1 implies it is not a leap year\n", l);
  return 0;
}

void display() {
  printf("Fools too use C!\n");
  main();
}

long power(int x,int p) {
  int i; 
  long result = 1;
  if(x == 0) 
    return 0;
  else if(p >= 0) {
    for(i = 1; i <= p; i++)
      result = result * x;
    return result;
  }
  else {
    printf("enter a valid exponent. result shown below is wrong.\n");
    return -1;
  }
}

int is_Leap(int y) {
  if(y%4 == 0 && y%100 != 0 || y%100 == 0 && y%400 == 0)
    return 0;
  else 
    return 1;
}