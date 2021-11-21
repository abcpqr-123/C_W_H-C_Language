//C W H 15hrs


// Write a program having a variable i. Print the address of i.
//pass this variable to a function and print its address. Are these addresses
// Same? why?

#include <stdio.h>

void printAdd(int a){
  printf("The address of variable a is:  %u\n", &a );
}


int main() {
int i = 4;
printf("The value of variable i is: %d\n", i) ;
printAdd(i);
printf("The value of variable i is: %u\n", &i );
  return 0;
}



// OUTPUT:
// The address of variable a is:  6422272
// The value of variable i is: 4
// The value of variable i is: 6422300
