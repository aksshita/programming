#include <stdio.h>

void display();
long power(int,int);
int is_Leap(int);
void prime_Factors(int);

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
  /*int y,l;
  printf("enter an year to check if it is a leap year:\n");
  scanf("%d", &y);
  l = is_Leap(y);
  printf("l = %d\nl = 0 implies it is a leap year\nl = 1 implies it is not a leap year\n", l);*/
  int num;
  printf("enter a non zero postive integer to calculate its prime fctors:\n");
  scanf("%d", &num);
  prime_Factors(num);
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
    printf("enter a valid exponent. -1 below signifies a wrong output.\n");
    return -1;
  }
}

int is_Leap(int y) {
  if(y%4 == 0 && y%100 != 0 || y%100 == 0 && y%400 == 0)
    return 0;
  else 
    return 1;
}
void prime_Factors(int n) {
  int i  = 1,j;
   while(i <= n) {
    int k = 0; 
    if(n%i == 0) {
      j = 1;
      while(j <= i) {
        if(i%j == 0)
          k++;
        j++;
      }
      if(k == 2)
        printf("%d is a prime factor\n", i);
    }
    i++;
  }
  return;
}
  