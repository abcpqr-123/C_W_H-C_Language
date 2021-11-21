//C W H-15hrs
// The volume of cyliner User Input

#include <stdio.h>

int main(){
  int radius;
  int hight;
  float pi=3.14;


  printf("Enter the radius of cyliner: ");
  scanf("%d", &radius);
  printf("Enter the hight of cyliner: ");
  scanf("%d", &hight);


float volume = pi*radius*radius*hight;


  printf("The volume is: %f\n", volume );

  return 0;
}
// output:
// Enter the radius of cyliner: 3
// Enter the hight of cyliner: 3
// The volume is: 84.780006
