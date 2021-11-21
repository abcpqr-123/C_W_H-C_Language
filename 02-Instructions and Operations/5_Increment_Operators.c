#include <stdio.h>

 int main() {
  int i = 5;
  printf("The value after i++ is %d\n", i++ );
  printf("The value of i is %d\n", i );
  printf("The value after ++i is %d\n", ++i );
  //++i; // --->first increment then print
  //i++; // ---> first print then increment
  
  i+=10; //it means increment i by 10
         //you can aslo write it like this: (i = i + 10);
  printf("The value of i is: %d\n", i );
  
  return 0;
}

// output:
// The value after i++ is 5
// The value of i is 6
// The value after ++i is 7


// output of: 
// i+=10;
// printf("The value of i is: %d\n", i ); 
//   is: 
//   The value of i is: 17
