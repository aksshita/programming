#include <stdio.h>

void display();
long power(int,int);

int main() {
	//printf("only stupids use C?\n");
	//display();
  //main();
  long r;
  r = power(2,-3);
  printf("result is: %ld\n", r);
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
    for(i = 1; i <= p; i++) {
      result = result * x;
    }
    return result;
  }
  else {
    printf("enter a valid exponent. result shown below is wrong.\n");
    return -1;
  }
}
