//C W H 15hrs
//pointer exmple


#include <stdio.h>

int main(){

  int i = 34;
  int *j = &i;    //j will now store the address of i

  printf("The value of i is %d\n", i );
  printf("The value of i is %d\n", *j );

  printf("The address of i is %u\n",  &i );
  printf("The address of i is %u\n", j);
  printf("The address of i is %u\n", &j);
  printf("The address of i is %u\n", *(&j));


  return 0;
}

// output:
// The value of i is 34
// The value of i is 34

// note: The address number of variable a can change in different laptops
//       in differnt times. Its not nessesory that it should be the same
//       always

// The address of i is 6422296
// The address of i is 6422296
// The address of i is 6422296
// The address of i is 6422300
