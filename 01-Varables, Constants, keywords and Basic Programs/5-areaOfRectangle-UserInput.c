//C W H-15hrs
//Area of rectangle User Input:

#include <stdio.h>

int main(){
  int length;
  int breadth;


  printf("Enter the length of rectangle: ");
  scanf("%d", &length);
  printf("Enter the breadth of rectangle: ");
  scanf("%d", &breadth);

int area = length*breadth;


  printf("The area is: %d\n", area );

  return 0;
}

// output:
// Enter the length: 2
// Enter the breadth: 4
// The area is: 8
