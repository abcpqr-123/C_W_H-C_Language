//C W H 15hrs

// Write a program to print the address of a variable. Use the address to
// get the value of this variable

#include <stdio.h>

int main(){
  int a=6;
  int *ptr;
  ptr = &a;

  printf("The value of variable a is: %d\n", a);
  printf("The address of variable a is: %u\n", ptr);
  printf("The value of variable a is: %d\n", *ptr );
  return 0;
}


// Output:

// note: The address number of variable a can change in different laptops
//       in differnt times. Its not nessesory that it should be the same
//       always


// The value of variable a is: 6
// The address of variable a is: 6422296
// The value of variable a is: 6
