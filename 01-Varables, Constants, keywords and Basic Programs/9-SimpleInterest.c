//C W H-15hrs
//simpleInterest User Input:


#include <stdio.h>

int main(){
  float principal, rate, years;

  printf("Enter the principal: ");
  scanf("%f", &principal);
  printf("Enter the rate: ");
  scanf("%f", &rate);
  printf("Enter the years: ");
  scanf("%f", &years);

  float simpleInterest = (principal *  rate * years)/100;

  printf("The simpleInterest is: %f\n", simpleInterest );
}


// OUTPUT:
// Enter the principal: 100
// Enter the rate: 10
// Enter the years: 5
// The simpleInterest is: 50.000000
