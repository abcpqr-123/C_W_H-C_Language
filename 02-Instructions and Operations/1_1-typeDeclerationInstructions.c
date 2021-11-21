#include <stdio.h>

int main(){

  int a = 4, b, c;

//note: a shoud be at last position. if u write a=b=c,it wont work
  b = c = a;
  printf("The value of a is: %d\n", a );
  printf("The value of b is: %d\n", b );
  printf("The value of c is: %d\n", c );
  return 0;
}


// output:
// The value of a is: 4
// The value of b is: 4
// The value of c is: 4
