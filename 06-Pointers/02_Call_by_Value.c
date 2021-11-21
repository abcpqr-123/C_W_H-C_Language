//C W H 15hrs
//Call By value example


#include <stdio.h>

int sum (int a, int b);

int main(){
int a = 4; b = 7;

printf("The value of a and b is %d and %d\n", a, b );
printf("The value of 4 + 7 is %d\n", sum(a,b));
printf("The value of a and b after fuction call is %d and %d\n", a, b );

return 0;
}

int sum (int a, int b){
  //Note: Its not possible to change the values of main function by
  //      another function

  int c;
  c = a + b;
  b = 3434;
  a = 23432;

  return c;
}


// note: The address number of variable a can change in different laptops
//       in differnt times. Its not nessesory that it should be the same
//       always
