//C W H-15hrs
//Area of circle user input:

#include <stdio.h>

int main(){
  int radius;
  float pi=3.14;

  printf("Enter the radius of circle: ");
  scanf("%d", &radius);


float area = pi*radius*radius;


  printf("The area is: %f\n", area );

  return 0;
}
// output:
// Enter the radius of circle: 3
// The area is: 28.260000
