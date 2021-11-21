// write a program to determine wether a number is divisible by 97 0r not:

#include <stdio.h>

int main(){
  int number;
  printf("Enter the number: \n" );
  scanf("%d", &number);

  printf("Divisibility test returns: %d\n", number % 97 );

return 0;
}

// output:
// Enter the number:
// 97
// Divisibility test returns: 0

// Enter the number:
// 101
// Divisibility test returns: 4
